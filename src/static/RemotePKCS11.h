/*
 * asn2quickder output for RemotePKCS11 -- automatically generated
 *
 * Read more about Quick `n' Easy DER on https://github.com/vanrein/quick-der
 *
 */


#ifndef QUICK_DER_RemotePKCS11_H
#define QUICK_DER_RemotePKCS11_H


#include <quick-der/api.h>




/* Overlay structures with ASN.1 derived nesting and labelling */

typedef dercursor DER_OVLY_RemotePKCS11_ACK_OPAQUE;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_ULONG;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_TYPE;


typedef struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE {
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_TYPE type; // ACK-ATTRIBUTE-TYPE
	struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue {
		dercursor null; // NULL
		DER_OVLY_RemotePKCS11_ACK_OPAQUE data; // ACK-OPAQUE
	} pValue; // CHOICE { null NULL, data ACK-OPAQUE }
	DER_OVLY_RemotePKCS11_ACK_ULONG ulValueLen; // ACK-ULONG
} DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE;

typedef struct DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_pValue;

typedef dernode DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY_0;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_BBOOL;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_BYTE;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_FLAGS;


typedef struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS {
	struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_createMutex {
	dercursor null; // NULL
	dercursor present; // BOOLEAN (TRUE)
} createMutex; // CHOICE { null NULL, present BOOLEAN (TRUE) }
	struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_destroyMutex {
	dercursor null; // NULL
	dercursor present; // BOOLEAN (TRUE)
} destroyMutex; // CHOICE { null NULL, present BOOLEAN (TRUE) }
	struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_lockMutex {
	dercursor null; // NULL
	dercursor present; // BOOLEAN (TRUE)
} lockMutex; // CHOICE { null NULL, present BOOLEAN (TRUE) }
	struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_unlockMutex {
	dercursor null; // NULL
	dercursor present; // BOOLEAN (TRUE)
} unlockMutex; // CHOICE { null NULL, present BOOLEAN (TRUE) }
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
	dercursor pReserved; // NULL
	/* ...ASN.1 extensions... */
} DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS;

typedef struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_createMutex DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_createMutex;
typedef struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_destroyMutex DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_destroyMutex;
typedef struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_lockMutex DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_lockMutex;
typedef struct DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_unlockMutex DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS_unlockMutex;

typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_CERTIFICATE_CATEGORY;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_CERTIFICATE_TYPE;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_CHAR;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_CHAR_ARRAY;


typedef struct DER_OVLY_RemotePKCS11_ACK_DATE {
	dercursor year; // IA5String SIZE(4)
	dercursor month; // IA5String SIZE(2)
	dercursor day; // IA5String SIZE(2)
} DER_OVLY_RemotePKCS11_ACK_DATE;


typedef struct DER_OVLY_RemotePKCS11_ACK_VERSION {
	DER_OVLY_RemotePKCS11_ACK_BYTE major; // ACK-BYTE
	DER_OVLY_RemotePKCS11_ACK_BYTE minor; // ACK-BYTE
} DER_OVLY_RemotePKCS11_ACK_VERSION;


typedef struct DER_OVLY_RemotePKCS11_ACK_FUNCTION_LIST {
	DER_OVLY_RemotePKCS11_ACK_VERSION version; // ACK-VERSION
	dercursor functionlist; // BIT STRING
} DER_OVLY_RemotePKCS11_ACK_FUNCTION_LIST;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_HW_FEATURE_TYPE;


typedef struct DER_OVLY_RemotePKCS11_ACK_INFO {
	DER_OVLY_RemotePKCS11_ACK_VERSION cryptokiVersion; // ACK-VERSION
	dercursor manufacturerID; // UTF8String SIZE(32)
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
	dercursor libraryDescription; // UTF8String SIZE(32)
	DER_OVLY_RemotePKCS11_ACK_VERSION libraryVersion; // ACK-VERSION
} DER_OVLY_RemotePKCS11_ACK_INFO;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_JAVA_MIDP_SECURITY_DOMAIN;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_KEY_TYPE;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_LONG;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE;


typedef struct DER_OVLY_RemotePKCS11_ACK_MECHANISM {
	DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE mechanism; // ACK-MECHANISM-TYPE
	struct DER_OVLY_RemotePKCS11_ACK_MECHANISM_pParameter {
	dercursor null; // NULL
	DER_OVLY_RemotePKCS11_ACK_OPAQUE data; // ACK-OPAQUE
} pParameter; // CHOICE { null NULL, data ACK-OPAQUE }
	DER_OVLY_RemotePKCS11_ACK_ULONG ulParameterLen; // ACK-ULONG
} DER_OVLY_RemotePKCS11_ACK_MECHANISM;

typedef struct DER_OVLY_RemotePKCS11_ACK_MECHANISM_pParameter DER_OVLY_RemotePKCS11_ACK_MECHANISM_pParameter;

typedef struct DER_OVLY_RemotePKCS11_ACK_MECHANISM_INFO {
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMinKeySize; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMaxKeySize; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
} DER_OVLY_RemotePKCS11_ACK_MECHANISM_INFO;


typedef dernode DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY_0;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_NOTIFICATION;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_OBJECT_CLASS;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE;


typedef dernode DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY_0;


typedef dernode DER_OVLY_RemotePKCS11_ACK_OPAQUE_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_OPAQUE DER_OVLY_RemotePKCS11_ACK_OPAQUE_ARRAY_0;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_RV;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_SLOT_ID;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_STATE;


typedef struct DER_OVLY_RemotePKCS11_ACK_SESSION_INFO {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // ACK-SLOT-ID
	DER_OVLY_RemotePKCS11_ACK_STATE state; // ACK-STATE
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDeviceError; // ACK-ULONG
} DER_OVLY_RemotePKCS11_ACK_SESSION_INFO;


typedef dernode DER_OVLY_RemotePKCS11_ACK_SLOT_ID_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_SLOT_ID DER_OVLY_RemotePKCS11_ACK_SLOT_ID_ARRAY_0;


typedef struct DER_OVLY_RemotePKCS11_ACK_SLOT_INFO {
	dercursor slotDescription; // UTF8String SIZE(64)
	dercursor manufacturerID; // UTF8String SIZE(32)
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
	DER_OVLY_RemotePKCS11_ACK_VERSION hardwareVersion; // ACK-VERSION
	DER_OVLY_RemotePKCS11_ACK_VERSION firmwareVersion; // ACK-VERSION
} DER_OVLY_RemotePKCS11_ACK_SLOT_INFO;


typedef struct DER_OVLY_RemotePKCS11_ACK_TOKEN_INFO {
	dercursor label; // UTF8String SIZE(32)
	dercursor manufacturerID; // UTF8String SIZE(32)
	dercursor model; // UTF8String SIZE(16)
	dercursor serialNumber; // UTF8String SIZE(16)
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // ACK-FLAGS
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMaxSessionCount; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulSessionCount; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMaxRwSessionCount; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulRwSessionCount; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMaxPinLen; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMinPinLen; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulTotalPublicMemory; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulFreePublicMemory; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulTotalPrivateMemory; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG ulFreePritvateMemory; // ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_VERSION hardwareVersion; // ACK-VERSION
	DER_OVLY_RemotePKCS11_ACK_VERSION firmwareVersion; // ACK-VERSION
	dercursor utcTime; // IA5String SIZE(16)
} DER_OVLY_RemotePKCS11_ACK_TOKEN_INFO;


typedef dernode DER_OVLY_RemotePKCS11_ACK_ULONG_ARRAY;

typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_ULONG_ARRAY_0;


typedef DER_OVLY_RemotePKCS11_ACK_ULONG DER_OVLY_RemotePKCS11_ACK_USER_TYPE;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_UTF8CHAR;


typedef dercursor DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY;


typedef struct DER_OVLY_RemotePKCS11_C_CancelFunction_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_CancelFunction_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CancelFunction_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_CancelFunction_Return;


typedef struct DER_OVLY_RemotePKCS11_C_CloseAllSessions_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
} DER_OVLY_RemotePKCS11_C_CloseAllSessions_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CloseAllSessions_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_CloseAllSessions_Return;


typedef struct DER_OVLY_RemotePKCS11_C_CloseSession_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_CloseSession_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CloseSession_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_CloseSession_Return;


typedef struct DER_OVLY_RemotePKCS11_C_CopyObject_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hObject; // [1] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [2] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_CopyObject_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CopyObject_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phObject; // [4] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_CopyObject_Return;


typedef struct DER_OVLY_RemotePKCS11_C_CreateMutex_Call {
	dercursor empty; // NULL
} DER_OVLY_RemotePKCS11_C_CreateMutex_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CreateMutex_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OPAQUE ppMutex; // [0] ACK-OPAQUE
} DER_OVLY_RemotePKCS11_C_CreateMutex_Return;


typedef struct DER_OVLY_RemotePKCS11_C_CreateObject_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [1] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_CreateObject_Call;


typedef struct DER_OVLY_RemotePKCS11_C_CreateObject_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phObject; // [3] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_CreateObject_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Decrypt_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulEncryptedDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Decrypt_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Decrypt_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Decrypt_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulEncryptedPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptDigestUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulLastPartLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pLastPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulLastPartLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [2] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_DecryptInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DecryptInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulEncryptedPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulEncryptedPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DecryptVerifyUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DeriveKey_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hBaseKey; // [2] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [3] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulAttributeCount; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DeriveKey_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DeriveKey_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phKey; // [5] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_DeriveKey_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DestroyMutex_Call {
	DER_OVLY_RemotePKCS11_ACK_OPAQUE pMutex; // [0] ACK-OPAQUE
} DER_OVLY_RemotePKCS11_C_DestroyMutex_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DestroyMutex_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DestroyMutex_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DestroyObject_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hObject; // [1] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_DestroyObject_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DestroyObject_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DestroyObject_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Digest_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDigestLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Digest_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Digest_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pDigest; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDigestLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Digest_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DigestEncryptUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DigestFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDigestLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DigestFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DigestFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pDigest; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDigestLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DigestFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DigestInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
} DER_OVLY_RemotePKCS11_C_DigestInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DigestInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DigestInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DigestKey_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [1] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_DigestKey_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DigestKey_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DigestKey_Return;


typedef struct DER_OVLY_RemotePKCS11_C_DigestUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_DigestUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_DigestUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_DigestUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Encrypt_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Encrypt_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Encrypt_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedData; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Encrypt_Return;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedDataLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_EncryptFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedDataLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_EncryptFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [2] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_EncryptInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_EncryptInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_EncryptUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_EncryptUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_EncryptUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Finalize_Call {
	struct DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved {
	dercursor null; // NULL
	/* ...ASN.1 extensions... */
} pReserved; // [0] CHOICE { null NULL, ... }
} DER_OVLY_RemotePKCS11_C_Finalize_Call;

typedef struct DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved DER_OVLY_RemotePKCS11_C_Finalize_Call_pReserved;

typedef struct DER_OVLY_RemotePKCS11_C_Finalize_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	dercursor pReserved; // [0] ANY
} DER_OVLY_RemotePKCS11_C_Finalize_Return;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjects_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG ulMaxObjectCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_FindObjects_Call;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjects_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY phObject; // [1] ACK-OBJECT-HANDLE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulObjectCount; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_FindObjects_Return;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_FindObjectsFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjectsInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [1] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_FindObjectsInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_FindObjectsInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [1] ACK-ATTRIBUTE-ARRAY
} DER_OVLY_RemotePKCS11_C_FindObjectsInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateKey_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [2] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GenerateKey_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateKey_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phKey; // [4] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_GenerateKey_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pPublicKeyTemplate; // [2] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPublicKeyAttributeCount; // [3] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pPrivateKeyTemplate; // [4] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPrivateKeyAttributeCount; // [5] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phPublicKey; // [6] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phPrivateKey; // [7] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_GenerateKeyPair_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateRandom_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG ulRandomLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GenerateRandom_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GenerateRandom_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSeed; // [1] ACK-BYTE-ARRAY
} DER_OVLY_RemotePKCS11_C_GenerateRandom_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetAttributeValue_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hObject; // [1] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [2] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetAttributeValue_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetAttributeValue_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [2] ACK-ATTRIBUTE-ARRAY
} DER_OVLY_RemotePKCS11_C_GetAttributeValue_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetFunctionList_Call {
	dercursor empty; // NULL
} DER_OVLY_RemotePKCS11_C_GetFunctionList_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetFunctionList_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_FUNCTION_LIST ppFunctionList; // [0] ACK-FUNCTION-LIST
} DER_OVLY_RemotePKCS11_C_GetFunctionList_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_GetFunctionStatus_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetInfo_Call {
	dercursor empty; // NULL
} DER_OVLY_RemotePKCS11_C_GetInfo_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetInfo_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_INFO pInfo; // [0] ACK-INFO
} DER_OVLY_RemotePKCS11_C_GetInfo_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
	DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE type; // [1] ACK-MECHANISM-TYPE
} DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_MECHANISM_INFO pInfo; // [2] ACK-MECHANISM-INFO
} DER_OVLY_RemotePKCS11_C_GetMechanismInfo_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
	struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Call_pMechanismList {
	dercursor null; // NULL
} pMechanismList; // [1] CHOICE { null NULL }
	DER_OVLY_RemotePKCS11_ACK_ULONG pulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetMechanismList_Call;

typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Call_pMechanismList DER_OVLY_RemotePKCS11_C_GetMechanismList_Call_pMechanismList;

typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Return_pMechanismList {
		dercursor null; // NULL
		DER_OVLY_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY data; // ACK-MECHANISM-TYPE-ARRAY
	} pMechanismList; // [1] CHOICE { null NULL, data ACK-MECHANISM-TYPE-ARRAY }
	DER_OVLY_RemotePKCS11_ACK_ULONG pulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetMechanismList_Return;

typedef struct DER_OVLY_RemotePKCS11_C_GetMechanismList_Return_pMechanismList DER_OVLY_RemotePKCS11_C_GetMechanismList_Return_pMechanismList;

typedef struct DER_OVLY_RemotePKCS11_C_GetObjectSize_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hObject; // [1] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_GetObjectSize_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetObjectSize_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSize; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetObjectSize_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetOperationState_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulOperationStateLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetOperationState_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetOperationState_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pOperationState; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulOperationStateLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetOperationState_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetSessionInfo_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_GetSessionInfo_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetSessionInfo_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_SESSION_INFO pInfo; // [1] ACK-SESSION-INFO
} DER_OVLY_RemotePKCS11_C_GetSessionInfo_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetSlotInfo_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
} DER_OVLY_RemotePKCS11_C_GetSlotInfo_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetSlotInfo_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_SLOT_INFO pInfo; // [1] ACK-SLOT-INFO
} DER_OVLY_RemotePKCS11_C_GetSlotInfo_Return;


typedef struct DER_OVLY_RemotePKCS11_C_GetSlotList_Call {
	DER_OVLY_RemotePKCS11_ACK_BBOOL tokenPresent; // [0] ACK-BBOOL
	struct DER_OVLY_RemotePKCS11_C_GetSlotList_Call_pSlotList {
	dercursor null; // NULL
} pSlotList; // [1] CHOICE { null NULL }
	DER_OVLY_RemotePKCS11_ACK_ULONG pulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetSlotList_Call;

typedef struct DER_OVLY_RemotePKCS11_C_GetSlotList_Call_pSlotList DER_OVLY_RemotePKCS11_C_GetSlotList_Call_pSlotList;

typedef struct DER_OVLY_RemotePKCS11_C_GetSlotList_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	struct DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList {
		dercursor null; // NULL
		DER_OVLY_RemotePKCS11_ACK_SLOT_ID_ARRAY data; // ACK-SLOT-ID-ARRAY
	} pSlotList; // [1] CHOICE { null NULL, data ACK-SLOT-ID-ARRAY }
	DER_OVLY_RemotePKCS11_ACK_ULONG pulCount; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_GetSlotList_Return;

typedef struct DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList DER_OVLY_RemotePKCS11_C_GetSlotList_Return_pSlotList;

typedef struct DER_OVLY_RemotePKCS11_C_GetTokenInfo_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
} DER_OVLY_RemotePKCS11_C_GetTokenInfo_Call;


typedef struct DER_OVLY_RemotePKCS11_C_GetTokenInfo_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_TOKEN_INFO pInfo; // [1] ACK-TOKEN-INFO
} DER_OVLY_RemotePKCS11_C_GetTokenInfo_Return;


typedef struct DER_OVLY_RemotePKCS11_C_InitPIN_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY pPin; // [1] ACK-UTF8CHAR-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPinLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_InitPIN_Call;


typedef struct DER_OVLY_RemotePKCS11_C_InitPIN_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_InitPIN_Return;


typedef struct DER_OVLY_RemotePKCS11_C_InitToken_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
	dercursor pPin; // [1] UTF8String
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPinLen; // [2] ACK-ULONG
	dercursor pLabel; // [3] UTF8String SIZE(32)
} DER_OVLY_RemotePKCS11_C_InitToken_Call;


typedef struct DER_OVLY_RemotePKCS11_C_InitToken_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_InitToken_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Initialize_Call {
	struct DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs {
	dercursor null; // NULL
	DER_OVLY_RemotePKCS11_ACK_C_INITIALIZE_ARGS data; // [0] ACK-C-INITIALIZE-ARGS
	/* ...ASN.1 extensions... */
} pInitArgs; // [0] CHOICE { null NULL, data [0] ACK-C-INITIALIZE-ARGS, ... }
} DER_OVLY_RemotePKCS11_C_Initialize_Call;

typedef struct DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs DER_OVLY_RemotePKCS11_C_Initialize_Call_pInitArgs;

typedef struct DER_OVLY_RemotePKCS11_C_Initialize_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	dercursor pInitArgs; // [0] ANY
} DER_OVLY_RemotePKCS11_C_Initialize_Return;


typedef struct DER_OVLY_RemotePKCS11_C_LockMutex_Call {
	DER_OVLY_RemotePKCS11_ACK_OPAQUE pMutex; // [0] ACK-OPAQUE
} DER_OVLY_RemotePKCS11_C_LockMutex_Call;


typedef struct DER_OVLY_RemotePKCS11_C_LockMutex_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_LockMutex_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Login_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_USER_TYPE userType; // [1] ACK-USER-TYPE
	DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY pPin; // [2] ACK-UTF8CHAR-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPinLen; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Login_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Login_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_Login_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Logout_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_Logout_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Logout_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_Logout_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Notify_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_NOTIFICATION event; // [1] ACK-NOTIFICATION
	dercursor pApplication; // [2] ANY
} DER_OVLY_RemotePKCS11_C_Notify_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Notify_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_Notify_Return;


typedef struct DER_OVLY_RemotePKCS11_C_OpenSession_Call {
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID slotID; // [0] ACK-SLOT-ID
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // [1] ACK-FLAGS
	struct DER_OVLY_RemotePKCS11_C_OpenSession_Call_pApplication {
	dercursor null; // NULL
	dercursor opaque; // ANY
} pApplication; // [2] CHOICE { null NULL, opaque ANY }
	struct DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify {
	dercursor null; // NULL
	dercursor present; // BOOLEAN (TRUE)
} notify; // [3] CHOICE { null NULL, present BOOLEAN (TRUE) }
} DER_OVLY_RemotePKCS11_C_OpenSession_Call;

typedef struct DER_OVLY_RemotePKCS11_C_OpenSession_Call_pApplication DER_OVLY_RemotePKCS11_C_OpenSession_Call_pApplication;
typedef struct DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify DER_OVLY_RemotePKCS11_C_OpenSession_Call_notify;

typedef struct DER_OVLY_RemotePKCS11_C_OpenSession_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE phSession; // [4] ACK-SESSION-HANDLE
} DER_OVLY_RemotePKCS11_C_OpenSession_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SeedRandom_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSeed; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulSeedLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SeedRandom_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SeedRandom_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SeedRandom_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SetAttributeValue_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hObject; // [1] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [2] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulCount; // [3] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SetAttributeValue_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SetAttributeValue_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SetAttributeValue_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SetOperationState_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pOperationState; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulOperationStateLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hEncryptionKey; // [3] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hAuthenticationKey; // [4] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_SetOperationState_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SetOperationState_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SetOperationState_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SetPIN_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY pOldPin; // [1] ACK-UTF8CHAR-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulOldLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_UTF8CHAR_ARRAY pNewPin; // [3] ACK-UTF8CHAR-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulNewPin; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SetPIN_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SetPIN_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SetPIN_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Sign_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Sign_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Sign_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Sign_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pEncryptedPart; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulEncryptedPartLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignEncryptUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [2] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_SignInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SignInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignRecover_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignRecover_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignRecover_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulSignatureLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignRecover_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignRecoverInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [2] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_SignRecoverInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignRecoverInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SignRecoverInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_SignUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_SignUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_SignUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_SignUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_UnlockMutex_Call {
	DER_OVLY_RemotePKCS11_ACK_OPAQUE pMutex; // [0] ACK-OPAQUE
} DER_OVLY_RemotePKCS11_C_UnlockMutex_Call;


typedef struct DER_OVLY_RemotePKCS11_C_UnlockMutex_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_UnlockMutex_Return;


typedef struct DER_OVLY_RemotePKCS11_C_UnwrapKey_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hUnwrappingKey; // [2] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hWrappedKey; // [3] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG ulWrappedKeyLen; // [4] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ATTRIBUTE_ARRAY pTemplate; // [5] ACK-ATTRIBUTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulAttributeCount; // [6] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_UnwrapKey_Call;


typedef struct DER_OVLY_RemotePKCS11_C_UnwrapKey_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE phKey; // [7] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_UnwrapKey_Return;


typedef struct DER_OVLY_RemotePKCS11_C_Verify_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulDataLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulSignatureLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_Verify_Call;


typedef struct DER_OVLY_RemotePKCS11_C_Verify_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_Verify_Return;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyFinal_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulSignatureLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_VerifyFinal_Call;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyFinal_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_VerifyFinal_Return;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyInit_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [2] ACK-OBJECT-HANDLE
} DER_OVLY_RemotePKCS11_C_VerifyInit_Call;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyInit_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_VerifyInit_Return;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyRecover_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pSignature; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulSignatureLen; // [2] ACK-ULONG
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_VerifyRecover_Call;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyRecover_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pData; // [3] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulDataLen; // [4] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_VerifyRecover_Return;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyUpdate_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pPart; // [1] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG ulPartLen; // [2] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_VerifyUpdate_Call;


typedef struct DER_OVLY_RemotePKCS11_C_VerifyUpdate_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
} DER_OVLY_RemotePKCS11_C_VerifyUpdate_Return;


typedef struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call {
	DER_OVLY_RemotePKCS11_ACK_FLAGS flags; // [0] ACK-FLAGS
	struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call_pReserved {
	dercursor null; // NULL
	/* ...ASN.1 extensions... */
} pReserved; // [2] CHOICE { null NULL, ... }
} DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call;

typedef struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call_pReserved DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Call_pReserved;

typedef struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_SLOT_ID pSlot; // [1] ACK-SLOT-ID
	struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return_pReserved {
	dercursor null; // NULL
	/* ...ASN.1 extensions... */
} pReserved; // [2] CHOICE { null NULL, ... }
} DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return;

typedef struct DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return_pReserved DER_OVLY_RemotePKCS11_C_WaitForSlotEvent_Return_pReserved;

typedef struct DER_OVLY_RemotePKCS11_C_WrapKey_Call {
	DER_OVLY_RemotePKCS11_ACK_SESSION_HANDLE hSession; // [0] ACK-SESSION-HANDLE
	DER_OVLY_RemotePKCS11_ACK_MECHANISM pMechanism; // [1] ACK-MECHANISM
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hWrappingKey; // [2] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_OBJECT_HANDLE hKey; // [3] ACK-OBJECT-HANDLE
	DER_OVLY_RemotePKCS11_ACK_ULONG pulWrappedKeyLen; // [5] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_WrapKey_Call;


typedef struct DER_OVLY_RemotePKCS11_C_WrapKey_Return {
	DER_OVLY_RemotePKCS11_ACK_RV retval; // ACK-RV
	DER_OVLY_RemotePKCS11_ACK_BYTE_ARRAY pWrappedKey; // [4] ACK-BYTE-ARRAY
	DER_OVLY_RemotePKCS11_ACK_ULONG pulWrappedKeyLen; // [5] ACK-ULONG
} DER_OVLY_RemotePKCS11_C_WrapKey_Return;


typedef dercursor DER_OVLY_RemotePKCS11_NotifierCode;


typedef dercursor DER_OVLY_RemotePKCS11_OperationCode;


typedef struct DER_OVLY_RemotePKCS11_RemoteNotificationCall {
	DER_OVLY_RemotePKCS11_NotifierCode notecode; // NotifierCode
	dercursor notedata; // ANY
} DER_OVLY_RemotePKCS11_RemoteNotificationCall;


typedef struct DER_OVLY_RemotePKCS11_RemoteNotificationReturn {
	DER_OVLY_RemotePKCS11_NotifierCode notecode; // NotifierCode
	dercursor notedata; // ANY
} DER_OVLY_RemotePKCS11_RemoteNotificationReturn;


typedef struct DER_OVLY_RemotePKCS11_RemoteProcedureCall {
	DER_OVLY_RemotePKCS11_OperationCode opcode; // OperationCode
	dercursor opdata; // ANY
} DER_OVLY_RemotePKCS11_RemoteProcedureCall;


typedef struct DER_OVLY_RemotePKCS11_RemoteProcedureReturn {
	DER_OVLY_RemotePKCS11_OperationCode opcode; // OperationCode
	dercursor opdata; // ANY
} DER_OVLY_RemotePKCS11_RemoteProcedureReturn;


typedef struct DER_OVLY_RemotePKCS11_TransportMessage {
	DER_OVLY_RemotePKCS11_ACK_VERSION version; // ACK-VERSION
	dercursor transportID; // OCTET STRING
	dercursor requestID; // OCTET STRING
	struct DER_OVLY_RemotePKCS11_TransportMessage_payload {
	DER_OVLY_RemotePKCS11_RemoteProcedureCall call; // RemoteProcedureCall
	DER_OVLY_RemotePKCS11_RemoteProcedureReturn called; // RemoteProcedureReturn
	DER_OVLY_RemotePKCS11_RemoteNotificationCall notify; // RemoteNotificationCall
	DER_OVLY_RemotePKCS11_RemoteNotificationReturn noted; // RemoteNotificationReturn
	/* ...ASN.1 extensions... */
} payload; // CHOICE { call RemoteProcedureCall, called RemoteProcedureReturn, notify RemoteNotificationCall, noted RemoteNotificationReturn, ... }
	/* ...ASN.1 extensions... */
} DER_OVLY_RemotePKCS11_TransportMessage;

typedef struct DER_OVLY_RemotePKCS11_TransportMessage_payload DER_OVLY_RemotePKCS11_TransportMessage_payload;



/* Parser definitions in terms of ASN.1 derived bytecode instructions */

#define DER_PIMP_RemotePKCS11_ACK_OPAQUE(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_OPAQUE \
	DER_PACK_STORE | DER_TAG_OCTETSTRING

#define DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_ULONG \
	DER_PACK_STORE | DER_TAG_INTEGER

#define DER_PIMP_RemotePKCS11_ACK_ATTRIBUTE_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_ATTRIBUTE(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_TYPE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_ATTRIBUTE \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_TYPE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_ATTRIBUTE_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_BBOOL(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_BBOOL \
	DER_PACK_STORE | DER_TAG_BOOLEAN

#define DER_PIMP_RemotePKCS11_ACK_BYTE(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_BYTE \
	DER_PACK_STORE | DER_TAG_OCTETSTRING

#define DER_PIMP_RemotePKCS11_ACK_BYTE_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY \
	DER_PACK_STORE | DER_TAG_OCTETSTRING

#define DER_PIMP_RemotePKCS11_ACK_FLAGS(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_FLAGS \
	DER_PACK_STORE | DER_TAG_BITSTRING

#define DER_PIMP_RemotePKCS11_ACK_C_INITIALIZE_ARGS(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_C_INITIALIZE_ARGS \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_CERTIFICATE_CATEGORY(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_CERTIFICATE_CATEGORY \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_CERTIFICATE_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_CERTIFICATE_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_CHAR(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_CHAR \
	DER_PACK_STORE | DER_TAG_IA5STRING

#define DER_PIMP_RemotePKCS11_ACK_CHAR_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_CHAR_ARRAY \
	DER_PACK_STORE | DER_TAG_IA5STRING

#define DER_PIMP_RemotePKCS11_ACK_DATE(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_DATE \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_VERSION(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_BYTE, \
	DER_PACK_RemotePKCS11_ACK_BYTE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_VERSION \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_BYTE, \
	DER_PACK_RemotePKCS11_ACK_BYTE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_FUNCTION_LIST(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_BITSTRING, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_FUNCTION_LIST \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_BITSTRING, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_HW_FEATURE_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_HW_FEATURE_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_INFO(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_INFO \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_JAVA_MIDP_SECURITY_DOMAIN(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_JAVA_MIDP_SECURITY_DOMAIN \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_KEY_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_KEY_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_LONG(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_LONG \
	DER_PACK_STORE | DER_TAG_INTEGER

#define DER_PIMP_RemotePKCS11_ACK_MECHANISM_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_MECHANISM(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_MECHANISM \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_CHOICE_END, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_MECHANISM_INFO(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_MECHANISM_INFO \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_NOTIFICATION(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_NOTIFICATION \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_OBJECT_CLASS(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_OBJECT_CLASS \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_OBJECT_HANDLE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_OPAQUE_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_OPAQUE_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_RV(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_RV \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_SESSION_HANDLE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_SLOT_ID(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_SLOT_ID \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_STATE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_STATE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_SESSION_INFO(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_RemotePKCS11_ACK_STATE, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_SESSION_INFO \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_RemotePKCS11_ACK_STATE, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_SLOT_ID_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_SLOT_ID_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_SLOT_INFO(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_SLOT_INFO \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_TOKEN_INFO(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_ACK_TOKEN_INFO \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_IA5STRING, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_ACK_ULONG_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_ULONG_ARRAY \
	DER_PACK_STORE | DER_TAG_SEQUENCE

#define DER_PIMP_RemotePKCS11_ACK_USER_TYPE(implicit_tag) \
	DER_PIMP_RemotePKCS11_ACK_ULONG(implicit_tag)

#define DER_PACK_RemotePKCS11_ACK_USER_TYPE \
	DER_PACK_RemotePKCS11_ACK_ULONG

#define DER_PIMP_RemotePKCS11_ACK_UTF8CHAR(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_UTF8CHAR \
	DER_PACK_STORE | DER_TAG_UTF8STRING

#define DER_PIMP_RemotePKCS11_ACK_UTF8CHAR_ARRAY(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY \
	DER_PACK_STORE | DER_TAG_UTF8STRING

#define DER_PIMP_RemotePKCS11_C_CancelFunction_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CancelFunction_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CancelFunction_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CancelFunction_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CloseAllSessions_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CloseAllSessions_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CloseAllSessions_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CloseAllSessions_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CloseSession_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CloseSession_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CloseSession_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CloseSession_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CopyObject_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CopyObject_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CopyObject_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CopyObject_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CreateMutex_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CreateMutex_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CreateMutex_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CreateMutex_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CreateObject_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CreateObject_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_CreateObject_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_CreateObject_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Decrypt_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Decrypt_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Decrypt_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Decrypt_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptDigestUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptDigestUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptDigestUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptDigestUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptVerifyUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptVerifyUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DecryptVerifyUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DecryptVerifyUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DeriveKey_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DeriveKey_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DeriveKey_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DeriveKey_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DestroyMutex_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DestroyMutex_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DestroyMutex_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DestroyMutex_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DestroyObject_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DestroyObject_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DestroyObject_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DestroyObject_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Digest_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Digest_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Digest_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Digest_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestEncryptUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestEncryptUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestEncryptUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestEncryptUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestKey_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestKey_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestKey_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestKey_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_DigestUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_DigestUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Encrypt_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Encrypt_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Encrypt_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Encrypt_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_EncryptUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_EncryptUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Finalize_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Finalize_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Finalize_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Finalize_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjects_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjects_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjects_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjects_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjectsFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjectsFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjectsFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjectsFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjectsInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjectsInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_FindObjectsInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_FindObjectsInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateKey_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateKey_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateKey_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateKey_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateKeyPair_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateKeyPair_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateKeyPair_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(6), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(7), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateKeyPair_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(6), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(7), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateRandom_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateRandom_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GenerateRandom_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GenerateRandom_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetAttributeValue_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetAttributeValue_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetAttributeValue_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetAttributeValue_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetFunctionList_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetFunctionList_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetFunctionList_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_FUNCTION_LIST, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetFunctionList_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_FUNCTION_LIST, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetFunctionStatus_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetFunctionStatus_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetFunctionStatus_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetFunctionStatus_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetInfo_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetInfo_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetInfo_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetInfo_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetMechanismInfo_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetMechanismInfo_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetMechanismInfo_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetMechanismInfo_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetMechanismList_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetMechanismList_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetMechanismList_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetMechanismList_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetObjectSize_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetObjectSize_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetObjectSize_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetObjectSize_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetOperationState_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetOperationState_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetOperationState_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetOperationState_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSessionInfo_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSessionInfo_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSessionInfo_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SESSION_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSessionInfo_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SESSION_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSlotInfo_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSlotInfo_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSlotInfo_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SLOT_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSlotInfo_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SLOT_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSlotList_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_BBOOL, \
	DER_PACK_LEAVE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSlotList_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_BBOOL, \
	DER_PACK_LEAVE, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetSlotList_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID_ARRAY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetSlotList_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID_ARRAY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetTokenInfo_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetTokenInfo_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_GetTokenInfo_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_TOKEN_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_GetTokenInfo_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_TOKEN_INFO, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_InitPIN_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_InitPIN_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_InitPIN_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_InitPIN_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_InitToken_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_InitToken_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_STORE | DER_TAG_UTF8STRING, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_InitToken_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_InitToken_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Initialize_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_C_INITIALIZE_ARGS, \
	DER_PACK_LEAVE/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Initialize_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_C_INITIALIZE_ARGS, \
	DER_PACK_LEAVE/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Initialize_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Initialize_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_OPTIONAL, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_LockMutex_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_LockMutex_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_LockMutex_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_LockMutex_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Login_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_USER_TYPE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Login_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_USER_TYPE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Login_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Login_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Logout_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Logout_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Logout_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Logout_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Notify_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_NOTIFICATION, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Notify_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_NOTIFICATION, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Notify_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Notify_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_OpenSession_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_ANY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_OpenSession_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_ANY, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL, \
	DER_PACK_STORE | DER_TAG_BOOLEAN, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_OpenSession_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_OpenSession_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SeedRandom_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SeedRandom_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SeedRandom_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SeedRandom_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetAttributeValue_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetAttributeValue_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetAttributeValue_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetAttributeValue_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetOperationState_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetOperationState_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetOperationState_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetOperationState_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetPIN_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetPIN_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_UTF8CHAR_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SetPIN_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SetPIN_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Sign_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Sign_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Sign_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Sign_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignEncryptUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignEncryptUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignEncryptUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignEncryptUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignRecover_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignRecover_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignRecover_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignRecover_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignRecoverInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignRecoverInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignRecoverInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignRecoverInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_SignUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_SignUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_UnlockMutex_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_UnlockMutex_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_OPAQUE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_UnlockMutex_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_UnlockMutex_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_UnwrapKey_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(6), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_UnwrapKey_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(6), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_UnwrapKey_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(7), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_UnwrapKey_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(7), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Verify_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Verify_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_Verify_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_Verify_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyFinal_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyFinal_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyFinal_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyFinal_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyInit_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyInit_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyInit_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyInit_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyRecover_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyRecover_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyRecover_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyRecover_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyUpdate_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyUpdate_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_VerifyUpdate_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_VerifyUpdate_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_WaitForSlotEvent_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_WaitForSlotEvent_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_FLAGS, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_WaitForSlotEvent_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_WaitForSlotEvent_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_STORE | DER_TAG_NULL/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_WrapKey_Call(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_WrapKey_Call \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(0), \
	DER_PACK_RemotePKCS11_ACK_SESSION_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(1), \
	DER_PACK_RemotePKCS11_ACK_MECHANISM, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(2), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(3), \
	DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_C_WrapKey_Return(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_C_WrapKey_Return \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_RV, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(4), \
	DER_PACK_RemotePKCS11_ACK_BYTE_ARRAY, \
	DER_PACK_LEAVE, \
	DER_PACK_ENTER | DER_TAG_CONTEXT(5), \
	DER_PACK_RemotePKCS11_ACK_ULONG, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_NotifierCode(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_NotifierCode \
	DER_PACK_STORE | DER_TAG_ENUMERATED

#define DER_PIMP_RemotePKCS11_OperationCode(implicit_tag) \
	DER_PACK_STORE | implicit_tag

#define DER_PACK_RemotePKCS11_OperationCode \
	DER_PACK_STORE | DER_TAG_ENUMERATED

#define DER_PIMP_RemotePKCS11_RemoteNotificationCall(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_APPLICATION(3), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_NotifierCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_RemoteNotificationCall \
	DER_PACK_ENTER | DER_TAG_APPLICATION(3), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_NotifierCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_RemoteNotificationReturn(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_APPLICATION(4), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_NotifierCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_RemoteNotificationReturn \
	DER_PACK_ENTER | DER_TAG_APPLICATION(4), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_NotifierCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_RemoteProcedureCall(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_APPLICATION(1), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_OperationCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_RemoteProcedureCall \
	DER_PACK_ENTER | DER_TAG_APPLICATION(1), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_OperationCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_RemoteProcedureReturn(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_ENTER | DER_TAG_APPLICATION(2), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_OperationCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_RemoteProcedureReturn \
	DER_PACK_ENTER | DER_TAG_APPLICATION(2), \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_OperationCode, \
	DER_PACK_ANY, \
	DER_PACK_LEAVE, \
	DER_PACK_LEAVE

#define DER_PIMP_RemotePKCS11_TransportMessage(implicit_tag) \
	DER_PACK_ENTER | implicit_tag, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_OCTETSTRING, \
	DER_PACK_STORE | DER_TAG_OCTETSTRING, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_RemotePKCS11_RemoteProcedureCall, \
	DER_PACK_RemotePKCS11_RemoteProcedureReturn, \
	DER_PACK_RemotePKCS11_RemoteNotificationCall, \
	DER_PACK_RemotePKCS11_RemoteNotificationReturn/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END/* ...ASN.1 extensions... */, \
	DER_PACK_LEAVE

#define DER_PACK_RemotePKCS11_TransportMessage \
	DER_PACK_ENTER | DER_TAG_SEQUENCE, \
	DER_PACK_RemotePKCS11_ACK_VERSION, \
	DER_PACK_STORE | DER_TAG_OCTETSTRING, \
	DER_PACK_STORE | DER_TAG_OCTETSTRING, \
	DER_PACK_CHOICE_BEGIN, \
	DER_PACK_RemotePKCS11_RemoteProcedureCall, \
	DER_PACK_RemotePKCS11_RemoteProcedureReturn, \
	DER_PACK_RemotePKCS11_RemoteNotificationCall, \
	DER_PACK_RemotePKCS11_RemoteNotificationReturn/* ...ASN.1 extensions... */, \
	DER_PACK_CHOICE_END/* ...ASN.1 extensions... */, \
	DER_PACK_LEAVE



/* Recursive parser-sub definitions in support of SEQUENCE OF and SET OF */

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_ATTRIBUTE_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_ATTRIBUTE, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_ATTRIBUTE_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_ATTRIBUTE_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_ULONG, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_MECHANISM_TYPE_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_MECHANISM_TYPE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_OBJECT_HANDLE_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_OBJECT_HANDLE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_OPAQUE_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_OPAQUE_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_OPAQUE, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_OPAQUE_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_OPAQUE_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_OPAQUE_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_OPAQUE_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_OPAQUE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_SLOT_ID_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_SLOT_ID_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_SLOT_ID, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_SLOT_ID_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_SLOT_ID_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_SLOT_ID_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_SLOT_ID_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_SLOT_ID_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_ACK_ULONG_ARRAY \
	const derwalk DER_PACK_RemotePKCS11_ACK_ULONG_ARRAY_0 [] = { \
		DER_PACK_RemotePKCS11_ACK_ULONG, \
		DER_PACK_END }; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_ULONG_ARRAY_0 [] = { \
		{ 0, 0, NULL, NULL } \
	}; \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_ACK_ULONG_ARRAY [] = { \
		{ 0, \
		  DER_ELEMSZ (RemotePKCS11,ACK_ULONG_ARRAY,0), \
		  DER_PACK_RemotePKCS11_ACK_ULONG_ARRAY_0, \
		  DER_PSUB_RemotePKCS11_ACK_ULONG_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_CopyObject_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_CopyObject_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_CopyObject_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_CreateObject_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_CreateObject_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_CreateObject_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_DeriveKey_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_DeriveKey_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_DeriveKey_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_FindObjects_Return \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_FindObjects_Return [] = { \
		{ DER_OFFSET (RemotePKCS11,C_FindObjects_Return,phObject), \
		  DER_ELEMSZ (remotepkcs11,ACK_OBJECT_HANDLE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_OBJECT_HANDLE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_OBJECT_HANDLE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_FindObjectsInit_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_FindObjectsInit_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_FindObjectsInit_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_FindObjectsInit_Return \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_FindObjectsInit_Return [] = { \
		{ DER_OFFSET (RemotePKCS11,C_FindObjectsInit_Return,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GenerateKey_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GenerateKey_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GenerateKey_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GenerateKeyPair_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GenerateKeyPair_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GenerateKeyPair_Call,pPublicKeyTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ DER_OFFSET (RemotePKCS11,C_GenerateKeyPair_Call,pPrivateKeyTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GetAttributeValue_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GetAttributeValue_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GetAttributeValue_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GetAttributeValue_Return \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GetAttributeValue_Return [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GetAttributeValue_Return,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GetMechanismList_Return \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GetMechanismList_Return [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GetMechanismList_Return,pMechanismList) \
		+ DER_OFFSET (RemotePKCS11,C_GetMechanismList_Return_pMechanismList,data), \
		  DER_ELEMSZ (remotepkcs11,ACK_MECHANISM_TYPE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_MECHANISM_TYPE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_MECHANISM_TYPE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_GetSlotList_Return \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_GetSlotList_Return [] = { \
		{ DER_OFFSET (RemotePKCS11,C_GetSlotList_Return,pSlotList) \
		+ DER_OFFSET (RemotePKCS11,C_GetSlotList_Return_pSlotList,data), \
		  DER_ELEMSZ (remotepkcs11,ACK_SLOT_ID_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_SLOT_ID_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_SLOT_ID_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_SetAttributeValue_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_SetAttributeValue_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_SetAttributeValue_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};

#define DEFINE_DER_PSUB_RemotePKCS11_C_UnwrapKey_Call \
	const struct der_subparser_action DER_PSUB_RemotePKCS11_C_UnwrapKey_Call [] = { \
		{ DER_OFFSET (RemotePKCS11,C_UnwrapKey_Call,pTemplate), \
		  DER_ELEMSZ (remotepkcs11,ACK_ATTRIBUTE_ARRAY,0), \
		  DER_PACK_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0, \
		  DER_PSUB_remotepkcs11_ACK_ATTRIBUTE_ARRAY_0 }, \
		{ 0, 0, NULL, NULL } \
	};



#endif /* QUICK_DER_RemotePKCS11_H */


/* asn2quickder output for RemotePKCS11 ends here */
