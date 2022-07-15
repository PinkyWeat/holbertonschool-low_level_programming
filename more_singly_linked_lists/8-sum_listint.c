#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to first node.
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
