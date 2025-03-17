#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
 /**
  * _strcopy - copy read-only data to mutable.
  * @dst: pointer to copy char to.
  * @src: read-only data.
  */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int a, b;


	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;


	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);


	d->name = malloc(a + 1);
	d->owner = malloc(b + 1);

	if (d->name == NULL || d->owner == NULL)
	{

		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}


	_strcopy(d->name, name);
	_strcopy(d->owner, owner);
	d->age = age;

	return (d);
}
