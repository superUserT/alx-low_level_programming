#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, counter = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		curr = excl >> index;
		if (curr & 1)
			counter++;
	}
	return (counter);
}
