#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t
 * Return: Number of nodes
 */

void print_listint(const listint_t *h)
{
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
