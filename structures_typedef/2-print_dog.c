#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @name: dog name
* @age: dog age
* @owner: owner name
*/
void print_dog(dog_t* d)
{
	if (d == NULL)
	{
		printf("nil\n");
		return;
}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Ownder: %s\n", d->name ? d-> : "(nil)");
}