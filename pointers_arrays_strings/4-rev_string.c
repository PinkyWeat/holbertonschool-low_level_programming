#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: position.
 */
void reverse_array(int *a, int n)
{
	int x, y, z;	

	for (y = 0, x = n - 1; x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
