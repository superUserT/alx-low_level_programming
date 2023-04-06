#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a string used to search 
 * @accept: the bytes to search for
 *
 * Return: pointer to the byte in s
 */


char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		counter++;
	}
	return ('\0');
}
