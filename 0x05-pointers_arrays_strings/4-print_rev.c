#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		a++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
