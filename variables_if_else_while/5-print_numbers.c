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

	for (x = '0'; x < '11'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
