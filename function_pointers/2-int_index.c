#include "function_pointers.h"

/**
 * int_index - return index
 *@array: array
 *@size: size of elements
 *@cmp: pointer to function
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int r;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (r = 0; r < size; r++)
{
if (cmp(array[r]))
return (r);
}
return (-1);
}
