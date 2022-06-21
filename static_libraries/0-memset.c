#include "main.h"
/**
 * *_memset - fills first n bytes of memarea pointed by s w/cnst b.
 * @n: num of bytes of memory area pointed to by 2
 * @s: string.
 * @b: cnst byte.
 * Return: pointer to the memory to print.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
