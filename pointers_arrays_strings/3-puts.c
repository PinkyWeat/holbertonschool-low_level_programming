#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: a string.
 * Return: length.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(str[c] + 48);
		c++;
	}

}
