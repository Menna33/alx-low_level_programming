#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner name
 * Return : new_one or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_one;
new_one = malloc(sizeof(dog_t));
if (new_one == NULL)
return (NULL);
if (name == NULL)
{
free(owner);
free(new_one);
return (NULL);
}

if (owner == NULL)
{
free(name);
free(new_one);
return (NULL);
}
new_one->owner = owner;
new_one->name = name;
new_one->age = age;
return (new_one);
}
