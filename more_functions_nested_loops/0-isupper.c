#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 * @c: The character to be checked.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

