#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of @size
 * bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * @nmemb: number of members/blocks desired
 * @size: amount of bytes for each member/block
 *
 * Return: pointer to new allocated memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	while (i < nmemb * size)
		n[i++] = 0;

	return (n);
}
