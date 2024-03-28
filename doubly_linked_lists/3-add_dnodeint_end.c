#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of doubly linked list
 * @head: pointer to a pointer
 * @n: value to be inserted in the new node
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;

	}
	else
		*head = new;

	return (new);
}
