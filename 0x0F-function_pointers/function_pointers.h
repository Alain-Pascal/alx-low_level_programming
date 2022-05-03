#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* prototype of function print_name */
void print_name(char *name, void (*f)(char *));

/* prototype of function array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
