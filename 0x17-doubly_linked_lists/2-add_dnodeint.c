#include "lists.h"

/**
 * add_dnodeint - adds a new node a the beginning of a dlistint_t list
 * @head: head of the doubly linked list
 * @n: node to be added
 *
 * Return: address of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
