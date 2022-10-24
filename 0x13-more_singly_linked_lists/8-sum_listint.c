#include "lists.h"

/**
 * sum_listint - sums all data (n) of a listint_t linked list
 *
 * @head: address to linked list
 *
 * Return: returns sum or 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
