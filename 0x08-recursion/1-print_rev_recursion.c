#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * _print_rev_recursion - a function that prints a string in reverse
 *@s: a pointer charactor
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
