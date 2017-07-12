#ifndef LIBRE_C_AIO_H_
#define LIBRE_C_AIO_H_

#include "sys/cdefs.h"
#include "time.h"
#include "signal.h"


struct __aiocb{
    int             aio_fildes;     //File descriptor.
    off_t           aio_offset;     //File offset.
    volatile void  *aio_buf;        //Location of buffer.
    size_t          aio_nbytes;     //Length of transfer.
    int             aio_reqprio;    //Request priority offset.
    struct sigevent aio_sigevent;   //Signal number and value.
    int             aio_lio_opcode; //Operation to be performed.
};


#define AIO_ALLDONE 1
    //A return value indicating that none of the requested operations could be canceled since they are already complete.
#define AIO_CANCELED 2
    //A return value indicating that all requested operations have been canceled.
#define AIO_NOTCANCELED 4
    //A return value indicating that some of the requested operations could not be canceled since they are in progress.
#define LIO_NOP 8
    //A lio_listio() element operation option indicating that no transfer is requested.
#define LIO_NOWAIT 16
    //A lio_listio() synchronization operation indicating that the calling thread is to continue execution while the lio_listio() operation is being performed, and no notification is given when the operation is complete.
#define LIO_READ 32
    //A lio_listio() element operation option requesting a read.
#define LIO_WAIT 64
    //A lio_listio() synchronization operation indicating that the calling thread is to suspend until the lio_listio() operation is complete.
#define LIO_WRITE 128
    //A lio_listio() element operation option requesting a write.


int      aio_cancel(int, struct aiocb *);
int      aio_error(const struct aiocb *);

int      aio_fsync(int, struct aiocb *);

int      aio_read(struct aiocb *);
ssize_t  aio_return(struct aiocb *);
int      aio_suspend(const struct aiocb *const [], int,
             const struct timespec *);
int      aio_write(struct aiocb *);
int      lio_listio(int, struct aiocb *restrict const [restrict], int,
             struct sigevent *restrict);
#endif
