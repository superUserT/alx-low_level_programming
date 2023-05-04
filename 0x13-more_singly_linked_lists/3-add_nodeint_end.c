#include <stdio.h>
#include <stdlib.h>
#include "list.h"



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL)
	}
	newnode-> = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = newnode;

	return (newnode);
}
