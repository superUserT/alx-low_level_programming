#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: a starting address of memory
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: a pointer with a memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (b);
}
