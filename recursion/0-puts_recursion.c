#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: void
 *
 */
void _puts_recurion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
