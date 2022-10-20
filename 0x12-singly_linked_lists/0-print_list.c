#include "lists.h"
/**
 * print_list - prints all the elements of a struct list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount;

	nodeCount = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
