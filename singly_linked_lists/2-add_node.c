#include "lists.h"
/**
 * add_node - adds a new node at the beginning.
 * @head: first node.
 * @str: what will be added.
 * Return: address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	newNode = malloc(sizeof(list_t));
	
	/* checking malloc */
	if (newNode == NULL)
		return (NULL);
	else /* creating new node */
	{
		newNode->str= strdup(str);
		newNode->len = strlen(str); /* links data part */
		newNode->next = *head; /* links address */
		*head = newNode;
	}
	return (newNode->next);
	
}
