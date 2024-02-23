#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */


void print_most_numbers(void)
{
	char i;

	for (i = '0';  <= '9'; i++)
	{
		if ((i == '2' || i == '4'))

			i++;

			_putchar(i);

	}
	_putchar('\n');
}
