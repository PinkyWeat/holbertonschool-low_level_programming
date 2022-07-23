#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of a dlistint_t linked list.
 * @head: pointer to first node.
 * @index: index.
 * Return: nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	for (idx = 0; idx < index && head; idx++)
		head = head->next;
	return (head);
}
