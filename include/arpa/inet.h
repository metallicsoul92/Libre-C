#ifndef INET_H_
#define INET_H_ 1

#include "sys/cdefs.h"
#include "netinet/in.h"
#include "inttypes.h"

uint32_t htonl(uint32_t);
uint16_t htons(uint16_t);
uint32_t ntohl(uint32_t);
uint16_t ntohs(uint16_t);

in_addr_t    inet_addr(const char *);
char        *inet_ntoa(struct in_addr);
const char  *inet_ntop(int, const void *restrict, char *restrict,
                 socklen_t);
int          inet_pton(int, const char *restrict, void *restrict);


#endif //arpa/inet.h
