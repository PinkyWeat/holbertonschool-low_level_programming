#include "main.h"
/**
 * flip_bits - function returns num of bits you need to flip to get from one number to another.
 * @n: num from.
 * @m: num to.
 * Return: number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;

	while (63)
	{
		if (n & m)
			bits++;
	}

	return (bits);
}
