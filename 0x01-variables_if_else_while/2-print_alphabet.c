#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 *
 */
int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; ++p)
		putchar(p);
	putchar('\n');
	return (0);
}
