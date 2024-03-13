#include <stdio.h>

/**
 * array_iterator - function that execute
 * parameter function
 *@size: the size of the function
 *@action: pointer of function
 *@array: string that save
 *the value of function
 *Return: return array[e]
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int e;

if (!array || !action)
return;

for (e = 0; e < size; e++)
action(array[e]);
}
