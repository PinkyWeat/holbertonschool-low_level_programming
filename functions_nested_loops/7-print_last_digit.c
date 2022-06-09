#include "main.h"
/**
 * print_last_digit - prints last digit.
 * @i: number
 * Return: returns i as last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = (i * (-1));
	i = (i % 10);
	_putchar(i + '0');
	return (i);
}
