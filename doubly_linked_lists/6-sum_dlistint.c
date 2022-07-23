#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to first node.
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
