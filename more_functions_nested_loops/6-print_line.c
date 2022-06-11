#include "main.h"
/**
 * print_line - will print a line out of _ .
 *
 *  @n: num introduced by user.
 */
void print_line(int n)
{
	int i = 0;

	while (i >= n)
	{
		_putchar('_');
	}
	_putchar(10);
}
