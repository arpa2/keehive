#include "server.h"
#include "pack.h"
#include "unpack.h"
#include "call.h"
#include "returncodes.h"
#include "settings.h"
#include "loader.h"


const char path[] = LIBSOFTHSM2_LIBRARY;


CK_FUNCTION_LIST_PTR function_list = NULL;

{% for call, return_ in zipped %}
{% set f = call.type_name[:-5]|under %}
CK_RV
server_{{ f }}(
        dercursor *cursorIn,
        dercursor *CursorOut
){

    if (function_list == NULL) {
        CK_RV status = cryptoki_loader(path, &function_list);
        if (status != CKR_OK)
            return status;
    }

    // Create unpack variable placeholders
    {% for type_, pointerized, identifier, other in extract_args(call, return_) -%}
    {{ initialise_unpack_placeholders(type_, identifier) }}
    {% endfor %}

    // unpack the dercursor into the placeholders
    CK_RV status = unpack_{{ call.type_name|under }}(
        cursorIn
        {%- for type_, pointerized, identifier, other in extract_args(call, return_) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer and not type_|is_notify %}&{% endif %}{{- identifier -}}{%- if not loop.last %},{% endif %}
        {%- endfor %}
    );

    if (status != CKR_OK)
        return status;

    // Create server response variable placeholders
    {% for type_, pointerized, identifier, other in extract_args(return_, call) -%}
    {% if not other %}{{ initialise_unpack_placeholders(type_, identifier, malloc=False) }}{% endif %}
    {% endfor %}


    {% if do_double_call(f) %}
    // do the first call to determine size
    retval = call_{{ f }}(
        &function_list
        {%- for type_, pointerized, value in combined_args(call, return_, disable_pointerisation=False) -%}
        {%- if loop.first %},{% endif %}
        {% if pointerized %}&{% endif %}{{ value }}{% if not loop.last %},{% endif %}  // {{ type_ }}
        {%- endfor %}
        );

    {% for type_, pointerized, identifier, other in extract_args(return_, call) -%}
    {{ get_size(f, identifier) }}
    {% endfor %}

    {% endif %}

    // do the actual library call
    retval = call_{{ f }}(
        &function_list
        {%- for type_, pointerized, value in combined_args(call, return_, disable_pointerisation=False) -%}
        {%- if loop.first %},{% endif %}
        {% if pointerized %}&{% endif %}{{ value }}{% if not loop.last %},{% endif %}  // {{ type_ }}
        {%- endfor %}
    );

    // pack the response
    status = pack_{{ f }}_Return(
        CursorOut
        {%- for type_, pointerized, value, other in extract_args(return_, call, False) -%}
        {%- if loop.first %},{% endif %}
        {% if not type_|is_pointer %}&{% endif %}{{ value }}{% if not loop.last %},{% endif %}  // {{ type_ }}
        {%- endfor %}
    );

    // free malloced stuff below (if any)
    {% for type_, pointerized, value in combined_args(call, return_) -%}
    {{ free(type_, value) }}
    {% endfor %}

    if (status != CKR_OK)
        return status;

    return CKR_OK;
}
{% endfor %}