#include "main.h"
/**
 * print_diagonal - prints a diagonal line.
 *
 * @n: number of times it prints.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar(10);
			if (i != n)
			{
				for (j = 0; j < i; j++)
					_putchar(32);
			}
		}
	}
}
