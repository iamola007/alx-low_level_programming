#include "main.h"

/**
 * print_times_table - is a function that prints times table
 * and arranges them accordingly
 * _putchar prints a character
 * @n: times table to use
 * Return:void
*/

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (a == b)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
