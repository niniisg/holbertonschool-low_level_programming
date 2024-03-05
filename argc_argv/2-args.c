#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program
 * @argv: arrays
 * @argc: argumment count
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
