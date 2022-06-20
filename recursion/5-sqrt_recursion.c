#include "main.h"
/**
 * _aux - finds the square.
 * @num: would be n.
 * @x: the natural square.
 * Return: the natural square or error.
 */
int _aux(int num, int x)
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
/**
 * _sqrt_recursion - calls aux to find the natural square of a number.
 * @n: the number we want to find the natural square of.
 * Return: the natural square.
 */
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
