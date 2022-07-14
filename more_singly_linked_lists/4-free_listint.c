#include "lists.h"
/**
 * free_listint - frees a litint_t list.
 * @head: contains address of first node.
 */
void free_listint(listint_t *head)
{
	listint_t *freeMe;

	if (!head)
	{
		free(head);
		return;
	}
	for (freeMe = head; freeMe->next;)
	{
		free(freeMe);
		freeMe = freeMe->next;
	}
	free(freeMe);
}
