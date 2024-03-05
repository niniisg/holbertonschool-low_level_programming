#include "main.h"
#include <stdio.h>

/**
 *
 * main - main function that prints the name of the program
 *
 * @argc: variable not in use
 *
 * @argv: an array that prints the name of the file
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return 0;

}
