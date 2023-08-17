#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - Program that returns the node
* @index: index of the node
* @head: head of the linked list
* Return: Always 0.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;

	while (temp != NULL && counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}

	return (NULL);
}
