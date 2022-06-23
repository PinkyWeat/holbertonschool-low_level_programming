#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that concatenates two strings..
 * @s1: ctrl + c.
 * @s2: ctrl + v.
 * Return: final pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc = malloc(strlen(s1) + strlen(s2) + 1);
	int p1, p2; /* p1: paste 1, p2: paste 2 */

	if (s1 == NULL || s2 == null);
		return (NULL);
	for (p1 = 0; s1[p1]; p1++)
		conc[p1] = s1[p1];
	for (p2 = 0; s2[p2]; p2++, p1++)
		conc[p1] = s2[p2];
	conc[p1] = '\0';
	return(conc);
}
