#include "lists.h"

/**
 * add_nodeint - adds a new node at the befinning of a listint_t list
 * @head: pointer to pointer to linked list
 * @n: node to be added
 *
 * Return: the address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
