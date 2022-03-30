#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prototype of functin _putchar */
int _putchar(char c);

/* prototype of function _memset */
char *_memset(char *s, char b, unsigned int n);

/* prototype of function _memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* prototype of function _strchr */
char *_strchr(char *s, char c);

/* prototype of function _strspn */
unsigned int _strspn(char *s, char *accept);

#endif /* MAIN_H */
