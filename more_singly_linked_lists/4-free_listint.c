#include "lists.h"
/**
 * free_listint - frees a litint_t list.
 * @head: contains address of first node.
 */
void free_listint(listint_t *head)
{
	listint_t freeMe;

	while ((freeMe = head))
	{
		if (freeMe->n)
			free(freeMe->n);
		head = head->next;
		free(freeMe);
	}
}
