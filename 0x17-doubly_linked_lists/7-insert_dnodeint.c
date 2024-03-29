#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node
* @n: Integer
* @h: header of the list
* @idx: index of the node
* Return: Always 0.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new;
	unsigned int counter = 0;

	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = NULL;
	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(new);
			return (NULL);
		}
		new->next = NULL, *h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h, (*h)->prev = new, *h = new;
		return (new);
	}
	temp = *h;
	while (temp != NULL && counter <= idx)
	{
		temp2 = temp->next;
		if (counter == idx - 1)
		{
			temp->next = new, new->prev = temp;
			if (temp2 == NULL)
				new->next = NULL;
			else
				new->next = temp2, temp2->prev = new;
			return (new);
		}
		temp = temp->next, counter++;
	}
	return (NULL);
}
