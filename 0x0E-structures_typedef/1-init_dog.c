#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog
 * @d : dog structure
 * @name : dog's name
 * @age : dog's age
 * @owner : dog owner
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
