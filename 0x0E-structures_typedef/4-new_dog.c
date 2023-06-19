#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);
	ret->name = strdup(name);
	ret->owner = strdup(owner);
	ret->age = age;
	return (ret);
}
