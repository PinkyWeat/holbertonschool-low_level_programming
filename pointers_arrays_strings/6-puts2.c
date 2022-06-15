#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other char.
 * @str: a string.
 *
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		else
		{
			continue;
		}
	}
	_putchar(10);
}
