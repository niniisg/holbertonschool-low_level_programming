#include "main.h"
/**
 *
 * _print_rev_recursion - Prints string in revers
 *
 * @s: String to be printed
 *
 * Return - Void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
