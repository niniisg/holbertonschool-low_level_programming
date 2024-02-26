#include "main.h"

/**
 * swap_int - swapping values of two integers
 *  @a: writing a function that swaps values
 *  @b: other value will be the same as a
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
