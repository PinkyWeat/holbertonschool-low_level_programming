#include <stdio.h>
/**
 * main - entry point, prints all arguments it receives.
 * @argv: arguments.
 * @argc: not used.
 * Return: 0 for success.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		printf("%s'n", argv[i]);
	return (0);
}
