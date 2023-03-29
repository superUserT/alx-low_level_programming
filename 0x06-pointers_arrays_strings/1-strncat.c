#include "main.h"
#include <stdio.h>


#include "main.h"
/**
 *_strncat - concatenate two strings
 *using at most n bytes from src
 *@dest: input value
 *@src: input value
 *@n: input value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int m = 0;

	while(dest[i] != '0\')
	{
		i++;
	}
	while(m < n && src[m] != '\0')
	{
		dest[i] = str[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return(dest);
}

