#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * * list_len - returns the number of elements
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */


size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
