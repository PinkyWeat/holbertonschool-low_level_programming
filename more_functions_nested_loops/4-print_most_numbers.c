#include "main.h"
/**
 * print_most_numbers - num 0 to 9 except 2 and 4.´
 *
 * Return: result.
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 4) || (i == 2))
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
		_putchar(10);
	}
}
