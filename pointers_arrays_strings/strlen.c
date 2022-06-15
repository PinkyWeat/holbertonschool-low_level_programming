#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: a string.
 * Return: length.
 */
int _strlen(char *s)
{
	int c = 0;

	while(*s[c] != "\o")
	{
		c++;
	}
	
	return(c);
}
