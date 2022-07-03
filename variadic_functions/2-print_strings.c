#include "variadic_functions.h"
/**
 * print_strings - function prints strings + new line.
 * @separator: separator between strings.
 * @n: number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *arg;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(str, char*);
		if (arg == NULL)
			printf("'(nil)'");
		else
			printf("%s", arg);
		if (separator != NULL && i < n -1)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
