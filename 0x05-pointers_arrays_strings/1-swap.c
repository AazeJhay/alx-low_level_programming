#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer
 * @b: second integer
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
