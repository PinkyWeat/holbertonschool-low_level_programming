#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -
 * @n: num 1.
 * Return: result.
 */
int print_to_98(int n)
{
	int i;
	
	if (n == 98)
	{
		printf("%d", n);
	}

	else if (n < 98)
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
		}
	}

	else if ( n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
