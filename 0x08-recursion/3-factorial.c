#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *factorial -  returns the factorial of a given number
 *Return: 1 for success, 1 an error, 0 for 1
 */

int factorial(int n)
{
	if (n >= 1)
	{
		return (factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n = 0)
	{
		return (1);
	}
	else
		return (1);
}
