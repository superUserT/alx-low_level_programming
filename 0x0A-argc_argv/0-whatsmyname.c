#include "main.h"
#include <stdio.h>

/**
 *main - a function that returns its name 
 *@argc: the count of arguments in the program
 *@argv: an array of a pointer
 *@printname: a char pointer 
 */

int main (int argc, char *argv[])
{
	char *printname = strrchr(argv[0], '/');
	
	if (printname == NULL)
	{
		printname = argv[0];
	}
	else
	{
		printname++;
	}
	printf("%s\n", printname);
	return (0);
}
