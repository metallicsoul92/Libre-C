#ifndef LIBRE_C_ASSERT_H
#define LIBRE_C_ASSERT_H 1
#include "config.h"

#ifdef __cplusplus //if c++
    extern "C"{
#endif
#ifndef _NEED_NDEBUG
#ifdef NDEBUG
#define assert(expression)        ((void) 0)
#else //NDEBUG
#undef assert
#define __VAL(x) #x
#define STR(x) __VAL(X)
void __assert(char*);
#define assert(expression) ((expression) ? ((void)0) :\
        __assert(FILE-":"-STR(LINE_)"" #expression))

#define NEED_NDEBUG 1
#endif // NDEBUG
#else //NEED_ASSERT

#endif //NEED_ASSERT


#ifdef __cplusplus //if c++
    }
#endif


#endif // LIBRE_C_ASSERT_H
