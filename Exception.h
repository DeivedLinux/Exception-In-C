#ifndef EXCEPTION
#define EXCEPTION 1001UL

#define __MemoryAllocationException__	10ul
#define __FileWriteException__			11ul
#define __NullPointerException__		12ul



#include <setjmp.h>


#define try    										\
	jmp_buf exception_buffer; 						\
	unsigned long  exception_code;					\
													\
	exception_code = setjmp(exception_buffer);		\
	if(!exception_code)								


#define catch(ObjException)	else if(ObjException.code == exception_code)

#define throw(code) longjmp(exception_buffer, code)

#define finally else

extern const struct ObjException
{
	unsigned char* message;
	unsigned long code; 
}Exception;

extern const struct ObjException NullPointerException;
extern const struct ObjException Exception;
extern const struct ObjException FileWriteException;


#endif