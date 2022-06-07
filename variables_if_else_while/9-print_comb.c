#include <stdlib.h>
/**
 * main - will print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
		if (x <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
