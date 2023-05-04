#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
    int sumvar = 0;

    while (head != NULL)
    {
        sumvar += head->n;
        head = head->next;
    }

    return (sumvar);
}
