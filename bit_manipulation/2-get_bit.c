#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number given.
 * @index: is the index.
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *bitsies = malloc(sizeof(int) * n), pepei = 0;

	if (bitsies == NULL) /* Check malloc */
		return (-1);
	while (n > 0)
	{
		bitsies[pepei] = n % 2;
		n = n / 2;
		pepei++;
	}
	return(bitsies[index]);
}
