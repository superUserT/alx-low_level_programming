#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a pointer of char datatype 
 * @accept: the return of the function
 *Return: numberr of bytes in segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, m, z;

	for (i = 0; s[i] != '\0'; m++)
	{
		if (s[i] != 32)
		{
			for (m = 0; accept[m] != '\0'; m++)
			{
				if (s[i] == accept[m])
				{
					z++;
				}
			}
		}
		else
			return (z);
	}
	return (z);
}
