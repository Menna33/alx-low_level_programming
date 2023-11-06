#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the info of struct dog
 * @d: dog struct
 *
 * Return : void
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
printf("Name:%p\n", (void*) d->name);
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: %p\n", (void*) d->owner);
else
printf("Owner: %s\n", d->owner);

}
