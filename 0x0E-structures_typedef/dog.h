#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new type struct named dog
 * @name: name dog
 * @age: age dog
 * @owner: owner of dog
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

#endif
