#include "main.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elements on a new line
 * @array: array
 * @size: size of elements to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
