#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string.
 * @c: the character to locate.
 * Return: char c through s.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
