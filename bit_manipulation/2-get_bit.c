#include "main.h"
#include <limits.h>
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number given.
 * @index: is the index.
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int *bitsies = malloc(sizeof(long int) * 555), pepei = 0;

	if (bitsies == NULL) /* Check malloc */
		return (-1);
	while (n > 0)
	{
		bitsies[pepei] = n % 2;
		n = n / 2;
		pepei++;
	}
	if (pepei < index)
		return (-1);
	return (bitsies[index]);
}
