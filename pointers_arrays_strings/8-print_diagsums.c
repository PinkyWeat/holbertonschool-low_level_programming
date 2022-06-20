#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diags of a square matrix.
 * @a: the array.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int i, j = size - 1, r1 = 0, r2 = 0;

	while (i <= (size * size))
	{
		r1 = r1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		r2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", r1, r2);
}
