#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to create a new dog struct
 * @d: name of the struct
 * @name: first member
 * @age: second member
 * @owner: Third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
