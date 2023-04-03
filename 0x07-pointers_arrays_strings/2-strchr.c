#include "main.h"

/**
 * _strchr - function that locates a character in a string 
 * @s: a source pointer 
 * @c: a charater returned
 * Return: a pointer 
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == '\0')
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	else 
	{
		return (NULL);
	}
}
