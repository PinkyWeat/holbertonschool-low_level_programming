#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num given.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = ~(1 << index), cp = *n;

	if (n)
	{
		if (index <= 64)
			*n = cp & num;
		return (1);
	}
	else 
		return (-1);
}