#include "function_pointers.h"
#include <stdio.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(a,b));
}
