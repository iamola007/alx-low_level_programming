#include "mani.h"

/**
 * _puts - prints a string
 * @str: a pointer to an int
 * Return: 0
*/

void _puts(char *str)
{
	char *c;
	int n;

	c = str;
	for (n = 0; c[n]; n++)
	{
		_putchar (c[n]);
	}
	_putchar('\n');
}
