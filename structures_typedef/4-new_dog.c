#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *juan;
	int lenN, lenO, i;

	/* length of memory we will need */
	lenN = strlen(name);
	lenO = strlen(owner);
	
	/* Allocating memory */
	juan = malloc(sizeof(dog_t));
	if (juan == NULL)
	{
		free(juan);
		return (NULL);
	}	
	
	juan->name = malloc(lenN + 1);
	if (juan->name == NULL)
	{
		free(juan->name);
		free(juan);
		return (NULL);
	}

	juan->owner = malloc(lenO + 1);
	if(juan->owner == NULL)
	{
		free(juan->owner);
		free(juan->name);
		free(juan);
		return (NULL);
	}

	/* filling in info */
	for (i = 0; i <= lenN; i++)
		juan->name[i] = name[i];
	juan->name[i] = '\0';

	for (i = 0; i <= lenO; i++)
		juan->owner[i] = owner[i];
	juan->owner[i] = '\0';

	juan->age = age;
	return (juan);
}
