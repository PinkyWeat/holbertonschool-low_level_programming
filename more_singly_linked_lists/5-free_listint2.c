#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a pointer that contains address of first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeMe;

	if (!head)
		return;
	while (*head)
	{
		freeMe = (*head);
		*head = (*head)->next;
		free(freeMe);
	}
	head = NULL;
}
