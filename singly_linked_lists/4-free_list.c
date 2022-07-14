#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to what to free.
 */
void free_list(list_t *head)
{
	list_t *freeme;

	while ((freeme = head))
	{
		if (freeme->str)
			free(freeme->str);
		head = head->next;
		free(freeme);
	}
}
