#include <stdio.h>
#include "dog.h"
/**
* init_dog - inits a variable of type dog
* @d: dog id
* @name: name of dog
* @age: age of dog
* @owner: owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
