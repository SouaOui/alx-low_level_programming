#include "dog.h"
/**
 * init_dog - function that initialize a variable dog
 * @d: struct dog
 * @name: name pointer to string
 * @age: float  age of the dog
 * @owner: name of the owner of the dog pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
