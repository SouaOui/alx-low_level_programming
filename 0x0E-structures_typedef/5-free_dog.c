#include"dog.h"
/**
 * free_dog - function that free dog
 * @d: pointer to dog_t type
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
