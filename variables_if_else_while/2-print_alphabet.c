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
	int x = 'A';

	while (x <= 'Z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}

}
