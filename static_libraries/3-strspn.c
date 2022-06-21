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
	unsigned int rbytes = 0; /* important to start it at 0 */

	for (i = 0; i <= 5; i++)
	{
		for (x = 0; accept[x]; x++) /* did it with for 'cause of the x = 0 part. */
		{
			if (s[i] == accept[x])
			{
				rbytes++;
			}
		}
	}
	return (rbytes);
}
