#include "main.h"
/*
 * print_traingle - prints a triangle.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, s;
	int j = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (j <= size)
		{
			s = size;
			j++;
			while (s > k)
			{
				_putchar(32);
				s--;
				i = 1;
			}
			while (i <= k)
			{
				_putchar(35);
				i++;
			}
			_putchar(10);
		}
	}
}
