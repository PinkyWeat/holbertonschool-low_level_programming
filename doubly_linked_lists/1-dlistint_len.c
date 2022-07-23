#include "main.h"
/**
 * dlistint_len - returns num of elemts in a linked dlistint_t list.
 * @h: pointer to first node.
 * Return: num of elmts.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
