#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: what we look for.
 * Return: num of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, x, rbytes;

	while (s[i])
	{
		x = 0;
		while (accept[x])
		{
			if(s[i] == accept[x])
			{
				rbytes++;
			}
		}
	}
	return(rbytes);
}
