#include <stdio.h>

/**
 * main -lowercase alphabet
 *
 * Return: 0 for (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
