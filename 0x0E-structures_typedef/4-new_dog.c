#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - created new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner name
 *
 * Return : new_one or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_one;
new_one = malloc(sizeof(dog_t));
if (new_one == NULL)
return (NULL);
new_one->name = name;
new_one->age = age;
new_one->owner = owner;
return (new_one);
}
