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
char *copyname;
char *copyowner;
int sname = 0, sowner = 0;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

sname = strlen(name);
sowner = strlen(owner);

doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
	return (NULL);

copyname = malloc(sname + 1);
if (copyname == NULL)
	return (NULL);

for (i = 0; name[i] ; i++)
{
	copyname[i] = name[i];
}
copyname[i] = '\0';

copyowner = malloc(sowner + 1);
if (copyowner == NULL)
	return (NULL);

for (i = 0; owner[i]; i++)
{
	copyowner[i] = owner[i];
}
copyowner[i] = '\0';

doggy->name = copyname;
doggy->age = age;
doggy->owner = copyowner;

return (doggy);
}
