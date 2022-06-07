#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	long int lastDigit = (n % 10);

	printf("Last digit of %d is", n);
	if (lastDigit > 5)
		printf("and is greater than 5\n");
	if (lastDigit == 0)
		printf("and is 0\n");
	if (lastDigit < 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
