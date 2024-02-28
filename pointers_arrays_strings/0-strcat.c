#include "main.h"

/**
 * _strcat - conects two strings.
 *
 * @src: a string that prints a secound copy
 * @dest: a string that overights
 * Return: pointer to dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int hello, welcome

	hello = 0;
	welcome = 0;

	while (dest[hello] != '\0')
		hello++;
	while (src[welcome] != '\0')
	{
		dest[hello] = src[welcome];
		hello++;
		welcome++;
	}
	dest[hello] = '\0'
	return (dest);
}
