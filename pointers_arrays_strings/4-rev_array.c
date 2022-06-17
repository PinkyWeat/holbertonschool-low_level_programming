#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: position.
 */
void reverse_array(int *a, int n)
{
	int x, y;
	char z;

	for (x = 0; s[x] != '\0'; x++)
	;
	for (y = 0, x = x - 1; y < x; y++, x--)
	{
		z = s[y];
		s[y] = s[x];
		s[x] = z;
	}
}
