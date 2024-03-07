#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated
 * @str: input string to copy
 *
 * Return: pointer to newly allocated memory
 */


char *_strdup(char *str)
{
	char *array;
	int i = 0, less = 0;


	if (str == NULL)
		return (NULL);

	while (str[less])
		less++;

	array = malloc(sizeof(char) * (less + 1));

	if (array == NULL)
		return (NULL);

	while ((array[i] = str[i]) != '\0')
		i++;

	return (array);
}
