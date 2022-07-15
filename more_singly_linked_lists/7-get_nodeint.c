#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node.
 * @index: nth node.
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tilThis;

	for (tilThis = 0; tilThis < index; tilThis++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
