#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted
 */

int _atoi(char *s)
{
	int m, g, n, len, t, digit;

	m = 0;
	g = 0;
	n = 0;
	len = 0;
	t = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && t == 0)
	{
		if (s[m] == '-')
			++g;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (g % 2)
				digit = -digit;
			n = n * 10 + digit;
			t = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			t = 0;
		}
		m++;
	}

	if (t == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	result = digit1 * digit2;

	printf("%d\n", result);

	return (0);
}
