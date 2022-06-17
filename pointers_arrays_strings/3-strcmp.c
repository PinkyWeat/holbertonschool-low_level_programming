#include "main.h"
/**
 * *_strncpy - copie & paste
 * @dest: ctrl+v
 * @src: ctrl+c
 * @n: num of bytes.
 * Return: (dest).
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] || s2[i])
	{
		if ( s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return(0);
}
