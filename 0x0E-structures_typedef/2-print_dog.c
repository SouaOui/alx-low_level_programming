#include"dog.h"
/**
 * print_dog - function that print the information for dog
 * @d: pointer to struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
		printf("(nil)");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
