#include "main.h"

/**
 * _isdigit- Checks if a character is uppercase.
 *
 * @c: int to checks
 *
 * Return: on success 1
 **/

	int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
