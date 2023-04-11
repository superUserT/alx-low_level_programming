#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that creates an array of chars
 * @size: an interger that defines the size of an array
 * @c: a charactor
 *Return: NUll if size is 0, returns pointer when it fails 
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
