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

	printf("Size of a char: %lu byte(s)\n" (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n" (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n" (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(d));
	printf("Size of afloat: %lu bytes(s)\n" (unsigned long)sizeof(f));
	return (0);
}
