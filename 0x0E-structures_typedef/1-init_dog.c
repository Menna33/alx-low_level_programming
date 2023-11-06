#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intialize values of the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner name
 *
 *Return : void
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
