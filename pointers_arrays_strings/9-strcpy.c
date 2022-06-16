#include "main.h"
/**
 * puts_half - puts half o the string.
 * @str: print
 *
 */
char * _strcpy(char * dest, char * src)
{
	int i = 0;

	while (src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
