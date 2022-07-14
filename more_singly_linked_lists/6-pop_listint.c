#include "lists.h"
/**
 * pop_listint - deletes headnode of a listint_t linked list.
 * @head: pointer of a pointer of the first node's address.
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ripNode;
	int data = 0;

	/* checks if head has data */
	if (*head == NULL)
		return (0);
	/* Node rips */
	ripNode = *head;
	data = (*head)->n;
	*head = ripNode->next;
	free(ripNode);
	return (data);
}
