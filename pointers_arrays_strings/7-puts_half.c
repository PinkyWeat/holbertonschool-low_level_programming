#include "main.h"
/**
 * puts_half - puts half o the string.
 * @str: print
 *
 */
void puts_half(char *str)
{
	int c = 0, n;

	while (str[c] != '\0')
	{
		c++;
	}

	for (n = (c / 2), c = c + 1; n <= c; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
