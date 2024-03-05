#include "main.h"

/**
 * _puts_recursion - function a string, follwed by a new line like
 * @s: string to print
 */
void _puts_recurion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
