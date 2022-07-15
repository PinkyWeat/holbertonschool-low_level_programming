#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to first node.
 * @index: ndex of list where new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	unsigned int counter = 0;

	/* Delete for index = 0 */
	if (index == 0)
	{
		*head = NULL;
		return (1);
	}
	/* loop through until index */
	while (counter < (index=1) && aux)
	{
		if (aux->next == NULL)
			return (-1);
		counter++;
		aux = aux->next;
	}
	/* Give address to delete */
	aux->next = NULL;
	return (1);
}
