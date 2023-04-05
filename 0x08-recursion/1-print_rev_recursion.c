#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 */

void _print_rev_recursion(char *s)
{
	int count = 0;
	int i;

	while (*s = '\0')
	{
		count++;
		p++;
	}/*count here has the length of the string */
	return count;

	if (i < count / 2)
	{
		temp = s[i];
		s[i] = s[count - i -1];
		s[count - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
