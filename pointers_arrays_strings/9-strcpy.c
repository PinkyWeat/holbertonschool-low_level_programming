#include "main.h"
/**
 * puts_half - puts half o the string.
 * @str: print
 *
 */
char * _strcpy(char * dest, char * src)
{
	int i = 0;

	for (i = 0; i <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}