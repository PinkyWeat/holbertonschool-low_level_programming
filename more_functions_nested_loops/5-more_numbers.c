#include "main.h"
/**
 * more_numbers - shows numbers 0 to 14, 10 times.
 * @i: num
 * @j: num 2
 * Return: Always 0.
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar ((j / 10) + 48);
			if (j >= 10)
			{
				_putchar ((j / 10) + 48);
			}
		}
		_putchar(10);
	}
}
