#include "main.h"
#include <stdio.h>

/**
 * _memset- functions copies n bytes of object pointed by s
 * @s: memory area to be filled
 * @b: the value to be set
 * @n:the number of bytes to be set
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i]  = b;
	}
	return (s);
}

