#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a var type struct dog.
 * @d: dog.
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
