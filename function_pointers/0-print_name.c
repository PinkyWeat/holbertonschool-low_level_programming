#include "main.h"
#include <stdio.h>
/**
 * print_name - function prints a name.
 * @name: string.
 * @f: function we will point to.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
