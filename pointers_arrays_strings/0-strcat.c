#include "main.h"
/**
 * *_strcat - appends the src string to the dest string
 * @dest: string is appended to this string.
 * @src: appended string
 * Return: (dest).
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x]; x++)
	;

	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = src[y];
	return (dest);
}
