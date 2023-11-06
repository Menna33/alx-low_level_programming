#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defination of the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner name
 *
 * Description: it is a astruct for
 *  dog to know all information about it
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */