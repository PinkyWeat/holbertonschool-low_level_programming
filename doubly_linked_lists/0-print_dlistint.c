#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: pointer to a first node.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n",h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
