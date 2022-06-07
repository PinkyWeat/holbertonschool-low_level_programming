#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - will print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x == q) || (x == e))
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
