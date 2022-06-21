#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, multiplies two numbers.
 * @argc: n multiplied
 * @argv: multiplied
 * Return: 0.
 */
int main(int argc, int *argv[])
{
	int n, m, r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		j = (m * n);
		printf("%d\n", j);
		return (0);
	}
}