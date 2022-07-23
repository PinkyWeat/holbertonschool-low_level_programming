#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index idx of linked list.
 * @head: pointer to a pointer to first node.
 * @index: index.
 * Return: 1 for success or -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *prevNode, *nextNode;
	unsigned int idx;

	aux = *head;
	if (!aux)
		return (-1);
	/* check if first */
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	/* loop til index */
	for (idx = 0; idx < index; idx++)
	{
		aux = aux->next;
		if (!aux)
			return (-1);
	}
	/* fill in info to delete nth */
	prevNode = aux->prev;
	nextNode = aux->next;
	prevNode->next = nextNode;
	nextNode->prev = prevNode;
	free(aux);
	return (1);
}
