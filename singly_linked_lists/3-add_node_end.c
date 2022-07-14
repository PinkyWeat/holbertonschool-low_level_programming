#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer pointing to address.
 * @str: string content.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *aux;

	if (*head)
		aux = *head;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	/* loop to give address of last node by not having next node*/
	while (aux->next != NULL)
	{
		printf("antes");
		aux = aux->next;
		printf("despues");
	}
	/* make newNode last node */
	aux->next = newNode;
	/* Fill in new node */
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
