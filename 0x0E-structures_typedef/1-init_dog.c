#include "dog.h"
/**
 * init_dog - initalize struct dog
 * @d: the struct
 * @name: input name
 * @age: input age
 * @owner: input owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
}
