#include "dog.h"

/**
 * init_dog - function to create a new dog struct
 * @d: name of the struct
 * @name: first member
 * @age: second member
 * @owner: Third member
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
