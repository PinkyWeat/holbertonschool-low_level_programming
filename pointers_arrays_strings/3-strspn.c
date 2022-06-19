#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: what we look for.
 * Return: num of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	unsigned int rbytes;

	 for (i = 0; s[i]; i++)
	{
		x = 0;
		while (accept[x])
		{
			if(s[i] == accept[x])
			{
				rbytes++;
			}
			x++;
		}
	}
	return(rbytes);
}
