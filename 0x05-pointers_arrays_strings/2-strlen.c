#include <stdio.h>
#include "main.h"

/**
 * strlen - a function that returns the length of a string
 * @s: a char pointer
 * @character: An interger used to traverse through the char array
 *Return: character
 */

int strlen(chr *s)
{
	int character  = 0;

	while(*s != '\0')
	{
		character++;
		*s++;
	}
return (character);
}
