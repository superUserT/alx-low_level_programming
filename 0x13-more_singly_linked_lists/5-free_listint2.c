#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temppnt;

	if (head == NULL)
		return;

	while (*head)
	{
		temppnt = (*head)->next;
		free(*head);
		*head = temppnt;
	}

	*head = NULL;
}
