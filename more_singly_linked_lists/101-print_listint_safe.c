#include "lists.h"
#include <string.h>
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int counter = 0;

	/* Check if head has smth */
	if (!head)
		return (98);
	/* Loop to print */
	while (head->next != NULL)
	{
		printf("%i", aux->n);
		head = head->next;
		counter++;
	}
	return (counter);
}
