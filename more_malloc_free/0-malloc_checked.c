#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: unsigned int type
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
