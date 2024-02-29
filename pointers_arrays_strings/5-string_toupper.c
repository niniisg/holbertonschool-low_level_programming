#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && s[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
