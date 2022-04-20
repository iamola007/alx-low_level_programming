#include "main.h"

/**
 * _strlen - length of string
 * @s: a pointer to be checked
 * Return: 0
*/

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
