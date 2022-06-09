#include "main.h"
/**
 * _abs - absolute value of an integer.
 * @i: number
 * Return: absolute value.
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	if (i < 0)
	{
		i = i * (-1);
		return (i);

	}
}
