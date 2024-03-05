#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program
 *
 *@argc: an array that prints the name of the file
 *
 *@argv: variable not in use
 *
 * Return: always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
