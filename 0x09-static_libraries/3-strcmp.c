#include <stdio.h>
#include "main.h" 

/**
 * _strcmp - compares two strings
 * @s1: a string pointer
 * @s2: another string pointer
 * Return: the s[2] -s[1]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

