#include "main.h"
/**
 * factorial - prints the factorial of a certain given number.
 * @n: given number.
 * Return: if n < 0 --> -1 (error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
