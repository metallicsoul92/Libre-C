#ifndef LIBRE_C_STDDEF_H_
#define LIBRE_C_STDDEF_H_ 1

#include "sys/cdefs.h"

#ifndef _HASNULL
#define NULL ((void*)0)
#define _HASNULL 1
#endif

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))

#ifndef _HAS_PTR_DIFF_T
typedef int ptrdiff_t;
#define _HAS_PTR_DIFF_T 1
#endif


#ifndef _HAS_SIZE_T
typedef unsigned int size_t;
#define _HAS_SIZE_T 1
#endif

#ifndef __HAS_W_CHAR_T
#undef wchar_t
typedef short _wchar_t;
#define wchar_t _wchar_t;
#define __HAS_W_CHAR_T 1
#endif



#endif
