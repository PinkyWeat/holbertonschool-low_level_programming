#include "main.h"
/**
 * times_table - shows the tables.
 * @i - first variable
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
