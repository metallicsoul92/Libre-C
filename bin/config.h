#ifndef CONFIG_H_
#define CONFIG_H_

//Versioning information
#define LIB_C_VERSION_MAJ "0"
#define LIB_C_VERSION_MIN "1"
#define LIB_C_VERSION_BUG "0"
#define LIB_C_VERSION "0.1.0"

//Platform Detection
/* #undef __OSX__ */
/* #undef __LINUX__ */
/* #undef __WINDOWS__ */
#define __FREEBSD__ 1
/* #undef __KERNEL__ */

//Compiler Detection
/* #undef __mingw__ */
/* #undef __msys__ */
/* #undef __cygwin__ */
/* #undef __borland__ */
/* #undef __msvc__ */
/* #undef __gcc__ */
/* #undef __gxx__ */
#define __clang__ 1

//Compiler Identification
#define __c_compilerID__ "Clang"
#define __cxx_compilerID__ "Clang"
//Features:
#define __MT_ENABLED 1

//Is it a kernel Library?
/* #undef __ISLIBK__ */


//Create custom lock system
/* #undef _HAS_CUSTOM_LOCK_ */
#endif
