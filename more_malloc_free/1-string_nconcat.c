#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string to concat.
 * @s2: second string to concat.
 * @n: if greater or equal yo s2 length we use this as len.
 * Return: a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) > 0)
		len += strlen(s1);
	if (strlen(s2) > 0)
	{
		if (n > strlen(s2))
			len += strlen(s2);
		else
			len += n;
	}
	len++;
	concat = malloc(len * sizeof(char) + 5);
	if (concat == NULL)
		return (NULL);
	/* 'til this point everything is for the length of the */
	/* concatenated strings and memory space */
	/* Below: will concat strings depending if value > 0*/
	if (strlen(s1) > 0 || s1 != NULL)
	{
		for (; s1[i]; i++)
			concat[i] = s1[i];
	}
	if (strlen(s2) > 0 || s2 != NULL)
	{
		if (n > strlen(s2))
			for (; s2[j]; i++, j++)
				concat[i] = s2[j];
		else
			for (; j < n; i++, j++)
				concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
