#include <stdio.h>
/**
 * main - entry point, prints the num of args passed to it.
 * @argv: not used here.
 * @argc: number of args.
 * Return: 0 for success.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
