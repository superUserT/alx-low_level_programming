#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_sqrt_recursion - a function that returns the natural square root of a number
 *@n: an interger
 *@lr: the lower limit of a recursion
 *@ur: the upper limit of a recussion
 *Return 0 for cuccess
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int lr = _sqrt_recursion(n / 4) * 2;
		int ur = lr + 1;

		if (ur * ur > n)
		{
			return (lr);
		}
		else
		{
			return (ur);
		}
	}
}
