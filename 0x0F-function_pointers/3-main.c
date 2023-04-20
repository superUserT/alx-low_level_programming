#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int first1, first2;
	char *operat;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first1 = atoi(argv[1]);
	operat = argv[2];
	first2 = atoi(argv[3]);

	if (get_op_func(operat) == NULL || operat[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operat == '/' && first2 == 0) || (*operat == '%' && first2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operat)(first1, first2));
	return (0);
}
