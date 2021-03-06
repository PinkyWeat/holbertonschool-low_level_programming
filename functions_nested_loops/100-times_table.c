#include "main.h"
/**
 * print_times_table - shows the tables.
 *
 * @n: size.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n <= 0 || n >= 15)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j <= n)
			{
				if (j < n)
				{
					_putchar(',');
				}
				if (k < 99 && k > 9)
				{
					_putchar(32);
				}
				if (k < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar(32);
			}

			if (k > 99)
			{
				_putchar((k / 100) + 48);
				_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
			}
			else if (k > 9)
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}

			else if (k <= 9)
			{
				_putchar((k % 10) + 48);
			}

		}
		_putchar('\n');
	}
}
