#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * _pow_recursion -  function that returns the value of x raised to the power of y
 * Return: 0 for success, 1 for failure
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y-1));
	}
}
