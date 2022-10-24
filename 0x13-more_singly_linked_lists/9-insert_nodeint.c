#include "lists.h"

/**
 * insert_nodeint_at_index - sums all data (n) of a listint_t linked list
 *
 * @head: address to linked list
 * @idx: index of the list where the new node should be added
 * @n: unisgned integer to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		for (i = 0; i < (idx - 1) && temp != NULL; i++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
