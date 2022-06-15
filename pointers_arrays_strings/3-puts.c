#include "main.h"
#include <stdio.h>
/**
 * _puts - returns the length of a string.
 * @s: a string.
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
