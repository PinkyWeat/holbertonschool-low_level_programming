#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters.
 * @n: first requiered parameter.
 * Return: result of sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int i;
	int res = 0;

	va_start(b, n);
	/* Where we do the process */
	for (i = 0; i < n; i++)
		res += va_arg(b, int);
	va_end(b);
	return (res);
}
