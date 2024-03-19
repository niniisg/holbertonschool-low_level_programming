#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number followed by n
 * @separator: a string to be printed between numbers
 * @n: number of ints
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list list;

	for (i = 0; i < n; i++)
	{
		number = va_arg(lisy, iny);
		printf("%s", separator)

			if i < n - 1 && separator)
				printf(%s, separator)
	}
	printf("\n");
	va_end(list)
}

