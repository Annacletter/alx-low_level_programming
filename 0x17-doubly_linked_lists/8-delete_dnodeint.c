#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at the index
* @index: index
* @head: head of the list
* Return: Always 0.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next, *prev;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (counter != index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
		return (-1);
	next = temp->next;
	prev = temp->prev;
	if (index == 0)
	{
		if (temp->next != NULL)
		{
			*head = temp->next;
			next->prev = NULL;
		}
		else
		{
			free(temp);
			*head = NULL;
			return (1);
		}
	}
	else
		prev->next = next;

	if (next != NULL)
		next->prev = prev;
	free(temp);

	return (1);
}
