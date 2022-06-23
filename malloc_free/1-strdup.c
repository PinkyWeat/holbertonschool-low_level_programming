#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i, len;
	char *paste;

	for (len = 0; str[len]; len++)
	;

	paste = malloc(len);
	
	for (i = 0; paste[i]; i++)
	{
		paste[i] = str[i];
	}

	return (paste);	
}
