#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of doubly linked list
 * @head: pointer to the head of the list
 * @n: value to be added to the new node
 *
 * Return: the address of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
