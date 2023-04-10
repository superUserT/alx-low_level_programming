#include "main.h"
#include <stdio.h>

/**
 *main - a function that returns its name 
 *@argc: the count of arguments in the program
 *@argv: an array of a pointer
 *@printname: a char pointer 
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

