#include "main.h" 
#include <stdio.h>

/**
*_strncpy - Method that copies a string.
*@dest: a pointer with a char datatype 
*@src: a pointer with a char datatype 
*@n: an interger used
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (n < m && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
