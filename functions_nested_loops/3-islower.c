#include "main.h"
/**
 * _islower(int c);
 *
 * Return (1) if c lowercase ; Return (0) otherwise.
 */
int _islower(int c)
{
	if ((c >= 97) || (c <= 122))
	{
	return (1);
	}
	if ((c >= 65) || (c <= 90))
	{
		return (0);
	}
}
