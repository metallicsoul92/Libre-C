#ifndef LIBRE_C_STDIO_H
#define LIBRE_C_STDIO_H 1

#include "sys/cdefs.h"
#include "stdbool.h"


#ifdef __cplusplus
extern "C" {
#endif


#define EOF (-1)

/* bits for ._flags in FILE*/
#define IOMAGIC  0xFACE0000 // MY own magic number ;)
#define FUSRBUF 1 //user owned buffer (dont delete upon close)
#define FUNBUF 2 // Unbuffered file
#define FNOREAD 4 // File cant be read
#define FNOWRITE 8 //File cant be written
#define FEOFSEEN 0x10 // End of file is seen
#define FERRSEEN 0x20 // Error
#define FLINKED 0x40 // Set to this if it is linked via _chain



#define IOBUFSIZE 4096 // 4k for buffer size




#ifdef _HAS_CUSTOM_LOCK_
typedef struct __IO_lock_t{
    bool isLocked;
} _IO_lock_t;
#else
typedef void _IO_lock_t;
#endif //HAS_CUSTOM_LOCK
struct __IO_FILE{
    int _flags;
    //Read
    char* _read_ptr;	/* Current read pointer */
    char* _read_end;	/* End of get area. */
    char* _read_base;	/* Start of putback+get area. */
    //Write
    char* _write_base;	/* Start of put area. */
    char* _write_ptr;	/* Current put pointer. */
    char* _write_end;	/* End of put area. */
   //Buffer
    char* _buf_base;	/* Start of reserve area. */
    char* _buf_end;	/* End of reserve area. */
    /* Base */
    char *_save_base; /* Pointer to start of non-current get area. */
    char *_backup_base;  /* Pointer to first valid character of backup area */
    char *_save_end; /* Pointer to end of non-current get area. */
    struct _IO_marker *_markers;

    struct _IO_FILE *_chain;

    int _fileno;  //file descriptor
  #if 0
    int _blksize;
  #else
    int _flags2;
  #endif
    off_t _old_offset; /* This used to be _offset but it's too small.  */

  #define __HAVE_COLUMN /* temporary */
    /* 1+column number of pbase(); 0 is unknown. */
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];

    /*  char* _save_gptr;  char* _save_egptr; */

    _IO_lock_t *_lock;
};

typedef struct  __IO_FILE __FILE;


extern struct __IO_FILE * _stdin;
extern struct __IO_FILE * _stdout;
extern struct __IO_FILE * _stderr;

/* C89/C99 say these are macros.  */
#define stdin _stdin
#define stdout _stdout
#define stderr _stderr


static bool print(const char *data,size_t length);
int printf(const char* __restrict, ...);
int sprintf (char *string, const char *form,...);


int putchar(int);

int puts(const char*);

#ifdef __cplusplus
}
#endif

#endif
