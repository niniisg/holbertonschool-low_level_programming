#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all link list
 * @h: pointer to the node
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
