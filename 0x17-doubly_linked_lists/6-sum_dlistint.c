#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - Function that returns the sum of all the data (n)
* @head: head of the list
* Return: Always 0.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
