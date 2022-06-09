#include "main.h"
/**
 * print_sign - print sign depending on result
 * @n: greater than / equal to 0 / lower than
 * Return: 1 / 0 / -1 depending on result
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
