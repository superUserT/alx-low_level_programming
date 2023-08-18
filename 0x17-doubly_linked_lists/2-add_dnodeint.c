#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a list
 * @head: struct
 * @n: number
 * Return: int
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
