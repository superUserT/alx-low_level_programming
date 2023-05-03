#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint *c = head;

	while (c != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
