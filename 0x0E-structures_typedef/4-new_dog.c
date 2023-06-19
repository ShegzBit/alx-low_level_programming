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
	if (ret == NULL || name == NULL || owner == NULL)
		return (NULL);
	ret->name = strdup(name);
	if (ret->name == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->owner = strdup(owner);
	if (ret->owner == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	ret->age = age;
	return (ret);
}
