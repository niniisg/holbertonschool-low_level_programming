#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints simple operations
 * @argv: array of arguments
 * @argc: array og arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int h, g, k;
	int (*flor)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	h = atoi(argv[1]);
	g = atoi(argv[3]);
	flor = get_op_func(argv[2]);

	if (!flor)
	{
	printf("Error\n");
	exit(99);
	}
	k = flor(h, g);
	printf("%d\n", k);
	return (0);
}
