#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create a new dog struct
 * @name: first member
 * @age: second member
 * @owner: Third member
 * Return: newly formed struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (0);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
