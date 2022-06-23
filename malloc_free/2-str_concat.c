#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings..
 * @s1: ctrl + c.
 * @s2: ctrl + v.
 * Return: final pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int p1, p2, len; /* p1: paste 1, p2: paste 2 */

	len = (strlen(s1) + strlen(s2) + 1);
	conc = malloc(len);
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (conc == NULL)
		return (NULL);
	for (p1 = 0; s1[p1]; p1++)
		conc[p1] = s1[p1];
	for (p2 = 0; s2[p2]; p2++, p1++)
		conc[p1] = s2[p2];
	conc[p1] = '\0';
	return (conc);
}
