#include "main.h"
/**
 * *_strncat - appends the src string to the dest string
 * @dest: string is appended to this string.
 * @src: appended string
 * @n: num of bytes.
 * Return: (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return(dest);
}
