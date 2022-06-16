#include "main.h"
/**
 * *_strncat - appends the src string to the dest string
 * @dest: string is appended to this string.
 * @src: appended string
 * @n: num of bytes.
 * Return: (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	for (x = 0; dest[x]; x++)
	;

	while (src[y] != src[n])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
