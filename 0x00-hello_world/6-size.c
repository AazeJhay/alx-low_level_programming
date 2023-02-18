#include <stdio.h>
/**
 * main - This is displaying the sizes of various computers
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	puts("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	puts("Size of an int: %lu bytes(s)", (unsigned long)sizeof(b));
	puts("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	puts("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	puts("Size of afloat: %lu bytes(s)", (unsigned long)sizeof(f));
	return (0);
}
