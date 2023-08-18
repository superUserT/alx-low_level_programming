#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: struct
 * Return: int
 */



size_t print_dlistint(const dlistint_t *h)
{
	int j = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		j++;
		h = (*h).next;
	}
	return (j);
}
