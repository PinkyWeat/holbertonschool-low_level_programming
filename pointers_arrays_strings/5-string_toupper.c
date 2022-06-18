#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase.
 * @toUpper: changes to uppercase.
 * Return: result.
 */
char *string_toupper(char *toUpper)
{
	int i;
	
	for  (i = 0; toUpper[i] != 0; i++)
	{
		if(toUpper[i] >= 97 && toUpper[i] <= 122)
		{
			toUpper[i] -= 32;
		}
	}
	return(toUpper);
}
