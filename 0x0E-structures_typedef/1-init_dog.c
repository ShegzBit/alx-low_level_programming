#include "dog.h"

/**
 * init_dog - a function to init dog
 * @d: dog to init
 * @name: d name
 * @age: d age
 * @owner: d owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
