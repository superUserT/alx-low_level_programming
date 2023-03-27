#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the value of two intergers using pointers
 * @a: an interger
 * @b: another interger value
 * @c: the silver bullet
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
