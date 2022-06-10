#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t list_node = 0;

	while (h)
	{
		list_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (list_node);
}
