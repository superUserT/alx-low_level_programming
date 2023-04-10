#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: arguments count
 * @argv: argument array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
