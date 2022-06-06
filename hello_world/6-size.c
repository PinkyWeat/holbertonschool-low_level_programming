#include <stdio.h>
/*
 * main - will print the size of various types on the computer it is compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int longLongInt;
	float floatType;
	/*sizeof evaluates the size of a variable*/
	printf("Size of a char:\n", sizeof(charType));
	printf("Size of an int:\n", sizeof(intType));
	printf("Size of a long int:\n", sizeof(longInt));
	printf("Size of a long long int:\n", sizeof(longLongInt));
	printf("Size of a float:\n", sizeof(floatType));
