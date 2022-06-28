#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a var type struct dog.
 * @d: dog.
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";


	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : nil);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : nil);
	}

	
}
