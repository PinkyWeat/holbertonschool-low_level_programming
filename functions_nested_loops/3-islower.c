#include "main.h"
/**
 * _islower - is lowercase
 * @c: is a character
 * Return: (1) if c lowercase
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (0);
}
