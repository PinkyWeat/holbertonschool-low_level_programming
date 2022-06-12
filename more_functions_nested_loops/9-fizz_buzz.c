#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - helps filter 99.5% of candidates.
 *
 * Return: 0.
 */
int fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) && (i % 5))
		{
			printf("FizzBuzz");
			putchar(10);
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(10);
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(10);
		}
		else
		{
			printf("%d", i);
			putchar(10);
		}
	}
}
