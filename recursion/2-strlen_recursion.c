#include "main.h"

/**
 *
 *  _strlen_recursion - Returns length of string
 *  @s: string to calculate the length of
 *
 *  Return: length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (1 + _strlen_recursion(s + 1));
}
