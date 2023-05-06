#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int decimalval = 0;

	if (!b)
		return (0);

	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		decimalval = 2 * decimalval + (b[counter] - '0');
	}
	return (decimalval);
}
