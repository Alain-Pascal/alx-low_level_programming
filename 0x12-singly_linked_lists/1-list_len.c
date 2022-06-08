#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node_c; /* node count */

	node_c = 0;
	while (h != NULL)
	{
		h = h->next;
		node_c++;
	}
	return (node_c);
}
