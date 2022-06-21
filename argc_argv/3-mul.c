#include <stdio.h>
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
