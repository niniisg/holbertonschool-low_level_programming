#include "lists.h"

/**
 * dlistint_t -
 * @
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
