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
		putchar(x);
		x++;
	}
	return (0);
}
