#include "main.h"
/**
 * print_rev - print string in reverse.
 * @s: a string.
 *
 */
void print_rev(char *s)
{
	int c,count = 0; 

	while (s[count] != '\0')
	{
		count++;
	}
	for (c = count - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
