#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *is_prime_number - a function that returns 1 if the input integer is a prime number
 *Return: 1 for success
 */

int is_prime_number(int n)
{
	    if (i * i > n)
	    {
		    return (1);
	    }
	    if (n % i == 0)
	    {
		    return (0);
	    }
	    return (is_prime_helper(n, i + 1));
}
