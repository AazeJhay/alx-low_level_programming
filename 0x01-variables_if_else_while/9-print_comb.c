#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 *
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		putchar(j + '0');
	if
		(j != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
			putchar(' ');
	}
	return (0);
}
