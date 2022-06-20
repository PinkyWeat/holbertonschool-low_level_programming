#include "main.h"
/**
 * is_prime_number - finds if a number is prime.
 * @n: number given.
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n < 4 && n > 1)
		return (1);
	return (aux(n, n - 1));
}
/**
 * aux - auxiliary helps main find if prime number.
 * @num: number we want to know if prime.
 * @x: num that helps get to the actual prime.
 * Return: 0 or 1.
 */
int aux(num, x)
{
	if (x == 1)
		return (1);
	if (num % x == 0)
	return (0);
	if (num % x != 0)
	return (aux(num, x - 1))
	return (0);
}

