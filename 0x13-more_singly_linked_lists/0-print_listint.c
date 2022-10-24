#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: linked list
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
