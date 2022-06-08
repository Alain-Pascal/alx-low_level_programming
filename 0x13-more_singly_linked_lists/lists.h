#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	char n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);

size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
