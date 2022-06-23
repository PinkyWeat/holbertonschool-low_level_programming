#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space which contains copy of str.
 * @str: string we'll copy.
 * Return: new space in memory.
 */
char *_strdup(char *str)
{
	int i, len;
	char *paste;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	;

	paste = malloc(len + 1);

	if (paste == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		paste[i] = str[i];
	paste[i] = '\0';
	return (paste);
}
