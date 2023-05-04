#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temppnt = head;

	while (temppnt && counter < index)
	{
		temppnt = temppnt->next;
		counter++;
	}

	return (temppnt ? temppnt : NULL);
}
