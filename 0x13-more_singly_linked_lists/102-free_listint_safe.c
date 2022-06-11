#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: pointer to head of linked list
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp, *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t linked list, even lists with a loop
 * @h: pointer to head node of linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_c = 0;
	listp_t *hptr, *new, *add;
	listint_t *cur;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (node_c);
			}
		}

		cur = *h;
		*h = (*h)->next;
		free(cur);
		node_c++;
	}

	*h = NULL;
	free_listp(&hptr);

	return (node_c);
}
