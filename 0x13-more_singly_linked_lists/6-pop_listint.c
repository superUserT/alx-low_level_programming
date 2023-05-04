#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 */

int pop_listint(listint_t **head)
{
	listint_t *temppnt;
	int counter;

	if (!head || !*head)
		return (0);

	counter = (*head)->n;
	temppnt = (*head)->next;
	free(*head);
	*head = temppnt;

	return (counter);
}
