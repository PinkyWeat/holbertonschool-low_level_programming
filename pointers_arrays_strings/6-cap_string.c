#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to capitalize.
 * Return: s.
 */
char *cap_string(char *s)
{
	int cont;

	for (cont = 0; s[cont]; cont++)
	{
		if (cont == 0 && s[cont] != '\0' && s[cont] >= 97 && s[cont] <= 122)
		{
			s[0] -= 32;
		}
		else if (s[cont] >= 97 && s[cont] <= 122)
		{
			if (s[cont - 1] == ',' || s[cont - 1] == ';' ||
				s[cont - 1] == '.' || s[cont - 1] == '!' ||
				s[cont - 1] == '?' || s[cont - 1] == '"' ||
				s[cont - 1] == '(' || s[cont - 1] == ')' ||
				s[cont - 1] == '{' || s[cont - 1] == '}' ||
				s[cont - 1] == ' ' || s[cont - 1] == '\t' ||
				s[cont - 1] == '\n')
			{
				s[cont] -= 32;
			}
		}
	}
	return (s);
}
