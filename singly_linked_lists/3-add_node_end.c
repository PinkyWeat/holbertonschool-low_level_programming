#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer pointing to address.
 * @str: string content.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *aux = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode)
	{
		if (*head == NULL)
			*head = newNode;
		else
		{
		/* loop to give address of last node by not having next node*/
			while (aux->next != NULL)
				aux = aux->next;
		/* make newNode last node */
			aux->next = newNode;
		}
	/* Fill in new node */
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
}
	else
		free(newNode);
	return (newNode);
}
