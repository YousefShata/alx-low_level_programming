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
int i;
dog_t *doggy;
int sname = 0, sowner = 0;
if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
sname = strlen(name);
sowner = strlen(owner);

doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
	return (NULL);

doggy->name  = malloc(sname + 1);
if (doggy->name == NULL)
{
	free(doggy->name);
	free(doggy);
	return (NULL);
}

for (i = 0; name[i] ; i++)
{
	doggy->name[i] = name[i];
}
doggy->name[i] = '\0';

doggy->owner = malloc(sowner + 1);
if (doggy->owner == NULL)
{
	free(doggy->owner);
	free(doggy);
	return (NULL);
}

for (i = 0; owner[i]; i++)
{
	doggy->owner[i] = owner[i];
}
doggy->owner[i] = '\0';

doggy->age = age;
return (doggy);
}
