#include <stdio.h>
/**
 * main - prints name of file it was compiled from.
 * Return: 0 for Success.
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
