#include "main.h"
#include <stdio.h>

/**
 *_strcat - method that contencates two strings
 *@i: an interger
 *@m: another interger
 *@*dest: a pointer
 *@*src: another pointer
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
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
