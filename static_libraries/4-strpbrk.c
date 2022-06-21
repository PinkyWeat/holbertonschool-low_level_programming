#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string.
 * @accept: bytes we look for.
 * Return: s or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, x;

	while (s[i])
	{
		x = 0;
		while (accept[x])
		{
			if (s[i] == accept[x])
			{
				return (&s[i]);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}
