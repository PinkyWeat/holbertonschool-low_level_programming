#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		print_alphabet(j);
		_putchar('\n');
	}
}
