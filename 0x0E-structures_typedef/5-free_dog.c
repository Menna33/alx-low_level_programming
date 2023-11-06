#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the object dog
 * @d: the object to be freed
 *
 * Return : void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
