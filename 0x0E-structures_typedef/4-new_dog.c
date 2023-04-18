#include "dog.h"
#include <string.h>
/**
 * new_dog - function that create a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return dog if success and NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *Name, *Owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	Name = malloc(sizeof(char) * strlen(name) + 1);
	if (Name == NULL)
	{
		free(new);
		return (NULL);
	}
	Owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (Owner == NULL)
	{
		free(Name);
		free(new);
		return (NULL);
	}
	strcpy(Name, name);
	strcpy(Owner, owner);
	new->name = Name;
	new->age = age;
	new->owner = Owner;
	return (new);
}
