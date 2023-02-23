#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * Return: always return 0
 *
 */

void print_alphabet_x10(void)
{
	int q;
	char a;

	for (q = 1 ; q <= 10 ; q++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
