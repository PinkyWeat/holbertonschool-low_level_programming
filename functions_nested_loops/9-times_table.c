#include "main.h"
/**
 * times_table - shows the tables.
 *
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

			if (k > 9)
			{
				_putchar((k / 10) + 48);
			}
			_putchar((k % 10) + 48);
			if (j <= 8)
			{	
				_putchar(',');
				if (k + i <= 9)
				{
					_putchar(' ');	
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
