#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - a struct of a dog
 * @name: dog name
 * @age: age dog's age
 * @owner: dog's owner
 *
 * Description: Description of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
