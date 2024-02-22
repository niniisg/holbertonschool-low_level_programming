#include "main.h"

/**
 * _isdigit- Checks if a character is uppercase.
 *
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 * @c: The character to be checked.
 */

int _isdigit (int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
