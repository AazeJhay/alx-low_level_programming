#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: the string
 * Return: 0
 */
void print_rev(char *s)
{
	int a;
	int b = 0;

	while (s[a] != '\0')
		a++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
