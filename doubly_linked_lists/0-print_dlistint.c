#include "lists.h"

/**
 * print_dlistint -prints elements of linked list
 * @h: pointer to the head of nodes
 *
 * Return: numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%d\n", h->n);
		}
			h = h->next;
			nodes++;
	}
	return (nodes);
}
