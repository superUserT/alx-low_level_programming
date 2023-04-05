#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_puts_recursion - A function that prints a sring followed by a new line
 *@s: a string that is to be printed
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

