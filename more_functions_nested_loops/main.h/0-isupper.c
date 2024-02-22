#include "main.h"

/**
 * _isupper - Checks if a character is uppercasea
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 * @c: The character to be checked.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		return (0);
}
