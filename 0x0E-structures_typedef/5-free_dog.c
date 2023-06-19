#include "dog.h"
/**
 * free_dog - frees a dog
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
