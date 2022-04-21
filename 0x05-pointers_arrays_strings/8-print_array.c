#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: a pointer to an int that will be updated
 * @n: return the value of n
 * Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
