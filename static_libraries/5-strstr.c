#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: where we look for a certain string.
 * @needle: what we look for.
 * Return: location of beginning of substring, or null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x = 0;

	while (needle[x])
	{
		x++;
	}
	while (*haystack)
	{
		i = 0;
		while (needle[i])
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
			i++;
		}
		if (i != x)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
		i++;
	}
	return (NULL);
}
