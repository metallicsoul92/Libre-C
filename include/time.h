#ifndef LIBRE_C_TIME_H
#define LIBRE_C_TIME_H

#ifndef _HASNULL
#define NULL ((void*)0)
#define _HASNULL
#endif

#ifndef _HAS_SIZE_T
typedef unsigned int size_t;
#define _HAS_SIZE_T 1
#endif

#define CLOCKS_PER_SEC _CPS

typedef unsigned int clock_t;
typedef unsigned long time_t;

#ifndef _CUSTOM_TIME_
struct __tm{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_day;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
}; // 36 bytes
#else
struct __tm{
    unsigned char tm_sec:6;
    unsigned char tm_min:6;//12
    unsigned char tm_hour:5;
    unsigned char tm_day:6; //23
    unsigned char tm_mon:3;
    unsigned short tm_year; //42
    unsigned char tm_wday:3;
    unsigned char tm_yday:7;//52
    unsigned char tm_isdst:1;
    unsigned char aligned:3; //56
}__attribute__(packed);
// 7 bytes
#endif //_CUSTOM_TIME_

typedef struct _tm tm;

char * ascitime(const struct tm *);
clock_t clock(void);
char *ctime(const time_t);
double difftime(time_t,time_t);
tm *gmtime(const time_t *);
tm *localtime(const time_t *);
time_t mktime(struct tm *);
size_t strftime(char *,size_t, const char*,const tm *);
time_t time(time_t *);


#endif // LIBRE_C_TIME_H_
