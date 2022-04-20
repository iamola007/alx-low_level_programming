#include "main.h"

/**
 * swap_int - swaps the values of 2 ints a and b
 * @a: a pointer to an int to be swapped
 * @b: pointer to an int to be swapped
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
