#include "main.h"
#include <stdio.h>
/**
 * _puts - print string.
 * @str: a string.
 *
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] ; c++)
	{
		_putchar(str[c]);
	}
	_putchar(10);
}
