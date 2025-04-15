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

/* prototype of function _strpbrk */
char *_strpbrk(char *s, char *accept);

/* prototype of function _strstr */
char *_strstr(char *haystack, char *needle);

/* prototype of function print_chessboard */
void print_chessboard(char (*a)[8]);

/* prototype of function print_diagsums */
void print_diagsums(int *a, int size);

/* prototype of function set_string */
void set_string(char **s, char *to);

#endif /* MAIN_H */
