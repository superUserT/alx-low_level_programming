#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: struct
 * @n: number
 * Return: int
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last_node = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;
	newnode->prev = last_node;
	last_node->next = newnode;

	return (newnode);
}
