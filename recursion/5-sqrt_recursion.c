#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number we'll find the natural square root of.
 * aux - auxiliar function.
 * @num - would be n.
 * @x - the natural square.
 * Return: n.
 */
int aux(int num, int x)
{
	int square;

	square = x * x;
	if (square == num)
		return (x);
	else if (square < num)
		return (aux(num, (x + 1)));
	else
		return (-1);
}
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
