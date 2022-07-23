#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index idx of linked list.
 * @head: pointer to a pointer to first node.
 * @index: index.
 * Return: 1 for success or -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delete, *bef, *aft;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		(*head)->prev = NULL;
		return (1);
	}
	delete = *head;
	while (delete->next && i != index)
	{
		i++;
		delete = delete->next;
	}
	if (i == index)
	{
		bef = delete->prev;
		if (!delete->next)
			bef->next = NULL;
		else
		{
			aft = delete->next;
			bef->next = aft;
			aft->prev = bef;
		}
		free(delete);
		return (1);
	}
	else
		return (-1);
}
