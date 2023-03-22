#include "main.h"

/**
* largest_number - returns the largest of 3 digits
* @a: interger 1
* @b: interger 2
* @c: interger 3
* Return: Largest numbers returned
*/

int largest_number(int a, int b, int c)
{
	int greatest;
	if (a > b && a > c)
	{
		greatest = a;
	}
	else if (a > b && c > a)
	{
		greatest = c;
	}
	else if (b > c)
	{
		greatest = b;
	}
	else
	{
		greatest = c;
	}
	return (greatest);
}
