#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char value to check
 * Return: always 0
 */
int _strlen(char *s)
{
	int j = 0; /* counts from 0*/

	for (; *s++;)
		j++;
	return (j);
}
