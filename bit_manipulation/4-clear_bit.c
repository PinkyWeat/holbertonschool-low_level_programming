#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num given.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
			*n &= ~(1 << index);
		return (1);
	}
	else 
		return (-1);
}
