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
char *copname;
char *copowner;
int sname, sowner;
if (name == NULL || owner == NULL)
	return (NULL);

sname = strlen(name);
sowner = strlen(owner);
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
	return (NULL);

copname = malloc(sname + 1);
if (copname == NULL)
	return (NULL);
for (i = 0; i < sname ; i++)
{
	copname[i] = name[i];
}
copname[i] = '\0';

copowner = malloc(sowner + 1);
if (copowner == NULL)
	return (NULL);

for (i = 0; i < sowner; i++)
{
	copowner[i] = owner[i];
}
copowner[i] = '\0';

doggy->name = copname;
doggy->age = age;
doggy->owner = copowner;

return (doggy);

}
