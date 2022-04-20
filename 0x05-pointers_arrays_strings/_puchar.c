#include <unistd.h>

/**
 * _putchar -writes the char c to stdout
 * @c: char to be printed
 * Return: 1 or 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
