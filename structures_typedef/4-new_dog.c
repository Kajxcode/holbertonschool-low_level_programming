#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	{
	if (name != NULL)
		{
			d->name = malloc(strlen(name) + 1);
			if (d->name == NULL)
			{
				free(d);
				return (NULL);
			}
	strcpy(d->name, name);
		}
	else
	{
		d->name = NULL;
	}
	if (owner != NULL)
	{
		d->owner = malloc(strlen(owner) + 1);
			if (d->owner == NULL)
			{
				free(d->name);
				free(d);
				return (NULL);
			}
		strcpy(d->owner, owner);
	}
	else
	{
		d->age = age;

		return (d);
	}
