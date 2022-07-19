#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: array of number.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = (1 << index), cp = *n;

	if (n)
	{
		if (index <= 64)
		{
			*n = num | cp;
			return (1);
		}
	}
	return (-1);
}
