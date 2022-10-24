#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: address to linked list
 *
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp1;
	listint_t *temp2;

	if (*head == NULL)
		return (0);

	temp1 = *head;
	head_node = temp1->n;
	temp2 = temp1->next;
	free(temp1);
	*head = temp2;
	return (head_node);
}
