#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: head of the list
*Return: Always 0.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
