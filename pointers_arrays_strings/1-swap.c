#include "main.h"
/**
* swap_int - swaps values
*
* @a: value assigned by user
* @b: value assigned by user
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
