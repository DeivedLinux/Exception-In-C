#include "Exception.h"



const struct ObjException Exception = {.message = "An Exception", .code = EXCEPTION};
const struct ObjException NullPointerException = {.message = "Null Pointer Exception", .code = __NullPointerException__};
const struct ObjException FileWriteException = {.message = "An exception occurred in file recording", .code = __FileWriteException__};
