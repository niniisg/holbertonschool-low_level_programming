#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creat array of character
 * @size: input size of array
 * @c: input character to inialize with
 *
 * Return: initialized charater array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
