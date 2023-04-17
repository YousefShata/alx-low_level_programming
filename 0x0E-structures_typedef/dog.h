#ifndef DOGS_H
#define DOGS_H
/**
 * struct dog - dogs struct
 * @name: name of the dog
 * @age: float age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef of type stuct dog
 */
typedef struct dog dog_t;
#endif
