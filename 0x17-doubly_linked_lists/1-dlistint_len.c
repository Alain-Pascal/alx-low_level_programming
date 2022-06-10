#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_node = 0;

	while (h)
	{
		list_node++;
		h = h->next;
	}
	return (list_node);
}
