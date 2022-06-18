#include "main.h"
/**
 * *_memset - fills the first n bytes of memory area pointed to by s w/cnst byte b.
 * @n: num of bytes of memory area pointed to by 2
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
