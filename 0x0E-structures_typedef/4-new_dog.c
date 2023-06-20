#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creat anew dog of type dog_t
 * @name: name of the dog
 * @age: float age of the dog
 * @owner: string name of the owner
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int sname = 0, sowner = 0, i;
if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
sname = strlen(name);
sowner = strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);

(*dog).name = malloc(sname + 1);

if ((*dog).name == NULL)
{
	free(dog);
	return (NULL);
}

for (i = 0; name[i]; i++)
{
	(*dog).name[i] = name[i];
}
dog->name[i] = '\0';

(*dog).owner = malloc(sowner + 1);

if ((*dog).owner == NULL)
{
	free(dog);
	return (NULL);
}

for (i = 0; owner[i]; i++)
{
	(*dog).owner[i] = owner[i];
}
dog->owner[i] = '\0';
dog->age = age;

return (dog);
}
