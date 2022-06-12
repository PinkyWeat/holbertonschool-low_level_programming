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
		for (s = 0; s <= size; s++)
		{
			for (z = size; z > s; z--)
			{
				_putchar(32);
			}
			_putchar(35);
		}
	}
	_putchar(10);
}
