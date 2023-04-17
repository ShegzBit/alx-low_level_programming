#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - frees dog
 * @dog_t : dog_t structure
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d);
free(d->name);
}
}
