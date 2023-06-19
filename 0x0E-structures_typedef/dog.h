#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * struct dog - a struct of a dog
 * @name: dog name
 * @age: age dog's age
 * @owner: dog's owner
 *
 * Description: Description of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
