#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i, len;
	char *paste;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	;

	paste = malloc(len);

	if (paste == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		paste[i] = str[i];
	paste[i] = '\0';
	return (paste);	
}
