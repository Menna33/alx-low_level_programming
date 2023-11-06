#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
new_one->name = malloc(sizeof(char) * strlen(name));
if (new_one->name == NULL)
{
free(new_one);
return (NULL);
}
new_one->owner = malloc(sizeof(char) * strlen(owner));
if (new_one->owner == NULL)
{
free(new_one->name);
free(new_one);
return (NULL);
}
new_one->owner = owner;
new_one->name = name;
new_one->age = age;
return (new_one);
}
