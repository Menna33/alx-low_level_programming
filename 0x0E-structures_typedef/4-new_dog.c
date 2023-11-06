#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be copied
 *
 * Return: pointer to the array
 */

char *_strdup(char *str)
{
char *new_str;
unsigned int i;
if (str == NULL)
return (NULL);
new_str = malloc(sizeof(char) * (strlen(str) + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; i < strlen(str); i++)
{
*(new_str + i) = *(str + i);
}
return (new_str);
}

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
new_one->name = _strdup(name);
if (new_one->name == NULL)
{
free(new_one);
return (NULL);
}
new_one->owner = _strdup(owner);
if (new_one->owner == NULL)
{
free(new_one->name);
free(new_one);
return (NULL);
}
new_one->age = age;
return (new_one);
}
