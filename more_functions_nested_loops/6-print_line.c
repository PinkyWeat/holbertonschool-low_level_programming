#include "main.h"
/**
 * print_line - will print a line out of _ .
 *
 *  @n: num introduced by user.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
