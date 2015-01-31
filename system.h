#ifndef __SYSTEM_H
#define __SYSTEM_H

/* system.c */
unsigned char *memcpy(unsigned char *dest, const unsigned char *src, int count);
unsigned char *memset(unsigned char *dest, unsigned char val, int count);
unsigned short *memsetw(unsigned short *dest, unsigned short val, int count);
int strlen(const char *str);
unsigned char inportb (unsigned short _port);
void outportb (unsigned short _port, unsigned char _data);

#endif
