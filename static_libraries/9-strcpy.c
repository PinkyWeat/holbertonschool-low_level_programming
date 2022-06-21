#include "main.h"
/**
 * _strcpy - copies string..
 * @dest: ctrl+v.
 * @src: ctrl+c.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
