#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: string
 * Return: s.
 */
char *leet(char *s)
{
	int i = 0, x;
	char letters[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (s[i])
	{
		x = 0;
		while (letters[x])
		{
			if (s[i] == letters[x] || s[i] == (letters[x] + 32))
			{
				s[i] = nums[x];
			}
			x++;
		}
		i++;
	}
	return (s);
}
