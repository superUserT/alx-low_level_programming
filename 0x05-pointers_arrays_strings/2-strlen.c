#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a char pointer
 * @character: An interger used to traverse through the char array
 *Return: character to string length
 */

int _strlen(char *s)
{
	int character  = 0;

	while(*s != '\0')
	{
		character++;
		s++;
	}
	return (character);
}
