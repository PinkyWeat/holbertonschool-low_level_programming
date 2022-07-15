#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of listint_t linkedlist.
 * @head: pointer to first node.
 * @index: ndex of list where new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ripNode, *aux = *head;
	unsigned int counter = 0;

	/* Check if head has smth */
	if (*head == NULL)
		return (-1);
	/* Delete for index = 0 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	/* loop through until index */
	while (counter < (index - 1) && aux)
	{
		if (aux->next == NULL)
			return (-1);
		counter++;
		aux = aux->next;
	}
	/* Give address to delete */
	ripNode = aux->next;
	aux->next = ripNode->next;
	free(ripNode);
	return (1);
}
