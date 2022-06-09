#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit.
 * @i: number
 * Return: returns i as last digit.
 */
int print_last_digit(int i)
{
	i = abs(i % 10);
	_putchar(i + '0');
	return (i);
}
