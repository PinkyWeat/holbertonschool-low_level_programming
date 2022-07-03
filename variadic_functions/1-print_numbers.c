#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: idk yet xd.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (i < n)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}
