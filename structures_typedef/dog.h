#ifndef DOG
#define DOG

/**
* struct dog- new type of data for dogs
* @name: name of dog
* @age: age of dog
* @owner: owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
