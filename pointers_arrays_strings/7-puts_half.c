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

	if ((c % 2) == 0)
	{
		n = c / 2;
	}

	else if ((c % 2) != 0)
	{
		n = (c / 2);
		n = n + 1;
	}
	for (; n <= c; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
