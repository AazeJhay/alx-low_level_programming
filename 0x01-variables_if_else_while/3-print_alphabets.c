#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 *
 */
int main(void)
{
	char j;
	char q;

	for (j = 'a' ; j <= 'z' ; ++j)
		putchar(j);
	for (q = 'A' ; q <= 'Z' ; ++q)
		putchar(q);
	putchar('\n');
	return (0);
}
