#include "dog.h"
#include <stddef.h>
/**
 *new_dog - creates new dog struct
 * @name : dog name
 * @age : dog age
 * @owner : dog owner
 * Return: a dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *stan = {stan->name = name, stan->age = age, stan->owner = owner}
if (stan != NULL)
  {
  return  (stan);
  }
 else 
   {
     return (NULL);
   }
}
