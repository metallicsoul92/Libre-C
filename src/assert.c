#include "../include/assert.h"
#include "../include/stdio.h"
#include "../include/stdlib.h"

void __assert(char *mesg){
    fputs(mesg,stderr);
    fputs("-- assertion failed\n",stderr);
    abort();
}
