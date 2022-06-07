#include <stdlib.h>
/**
 * main - will print a string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '0')
	{
		putchar(x);
		x++;
		if (x <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
