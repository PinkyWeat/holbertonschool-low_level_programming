#include "main.h"
/**
 * _memcpy - copies n bytes from memory area to a memory area.
 * @src: source _ ctrl + c.
 * @dest: destination _ ctrl v.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (0);
}
