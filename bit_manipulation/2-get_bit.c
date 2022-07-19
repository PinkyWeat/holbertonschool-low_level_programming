#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number given.
 * @index: is the index.
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
