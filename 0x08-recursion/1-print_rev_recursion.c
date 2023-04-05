#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *_print_rev_recursion - a function that prints a string in reverse
 *@count: a variable used to get the length of a string
 *@i: an interger used to hold a string 
 *@s: a pointer charactor
 *@temp: a temporary variable used to hold the value of an array
 */

void _print_rev_recursion(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		p++;
	

		if (i < count / 2)
		{
			temp = s[i];
			s[i] = s[count - i -1];
			s[count - i - 1] = temp;
			i++;
			_print_rev_recursion(s);
		}
	}
}
