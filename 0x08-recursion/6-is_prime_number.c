#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *is_prime_number - a function that returns 1 if the input integer is a prime number
 *Return: 1 for success
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return 1;  // 2 is prime
    } else if (n % 2 == 0) {
        return 0;  // n is not prime if it is even (except 2)
    } else {
        for (int i = 3; i*i <= n; i += 2) {
            if (n % i == 0) {
                return 0;  // n is not prime if it is divisible by i
            }
        }
        return 1;
    }
