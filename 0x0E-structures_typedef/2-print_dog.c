#include "dog.h"
/**
 *print_dog - prints the dog's attributes
 *@d: dog to print
 */
void print_dog(struct dog *d)
{
char *o = d->owner;
if (d == NULL)
{
exit(0);
}
else
{
(d->name != NULL) ?  printf("Name: %s\n", d->name) :  printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
(d->owner != NULL) ? printf("Owner: %s\n", o) : printf("Owner: (nil)\n");
}
}
