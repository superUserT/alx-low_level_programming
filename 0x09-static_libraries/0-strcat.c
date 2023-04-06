#include "main.h"

/**
*_strcat - contencates two strings
*@i: an interger
*@m: another interger
*@*dest: an input
*@*src: another input
*
*Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[m] != '\0')
	{
		i++;
		m++;
	}

	dest[i] = '\0';
	return (dest);
}
