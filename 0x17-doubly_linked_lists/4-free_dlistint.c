#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Program that frees a list.
* @head: head of the list
* Return: Always 0.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
