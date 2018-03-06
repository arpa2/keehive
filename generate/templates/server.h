

#ifndef KEEHIVE_SERVER_H
#define KEEHIVE_SERVER_H

#include "types.h"
#include "cryptoki.h"

CK_RV server_Begin();
CK_RV server_End();


{% for call in calls %}
CK_RV
server_{{ call.type_name[:-5]|under }}(
        dercursor *cursorIn,
        dercursor *CursorOut
);
{% endfor %}



#endif //KEEHIVE_SERVER_H
