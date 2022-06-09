#include "main.h"
/**
 * jack_bauer - starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			_putchar(0);
			_putchar(i);
		}
		else
		{
			_putchar(i / 10);
			_putchar(i % 10);
		}
		_putchar(':');
	}

	for (i = 0; i < 60; i++)
	{
		if (i < 10)
		{
			_putchar(0);
			_putchar(i);
		}
		else
		{
			_putchar(i / 10);
			_putchar(i % 10);
		}
		_putchar(':');
	}
}
