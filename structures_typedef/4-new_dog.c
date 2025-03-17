#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog struct and copies name and owner
 * @name: anem of dog
 * @age: age of dog
 * @owner: owner name
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i++])
	{
		length++;
	}
	return (length);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		d->name = malloc(_strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		_strncpy(d->name, name);
	}
	else
		d->name = NULL;

	if (owner != NULL)
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		_strncpy(d->owner, owner);
	}
	else
		d->owner = NULL;

	d->age = age;

	return (d);
}
