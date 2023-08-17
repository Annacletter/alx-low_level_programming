#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a linked list.
* @h: head of the list
* Return:Always 0.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
