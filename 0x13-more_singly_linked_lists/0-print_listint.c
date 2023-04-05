#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all ellements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}
	return (k);
}
