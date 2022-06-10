#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers 0 to 9 followed by a new line.
 * 
 * Return: number
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar(10);
}
