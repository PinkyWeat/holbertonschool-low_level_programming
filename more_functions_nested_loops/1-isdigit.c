#include  "main.h"
/**
 * _isdigit - it is a digit.
 * @c: the letter
 * Return: 1 if c if it is a digit.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 56))
	{
		return (1);
	}
	else
		return (0);
}
