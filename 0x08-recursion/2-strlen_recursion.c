#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * _strlen_recursion - a function that returns the length of a string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	while (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}