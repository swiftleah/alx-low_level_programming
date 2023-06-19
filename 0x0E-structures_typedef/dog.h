#ifndef DOG_H
#define DOG_H

/* Libraries: */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct for dog information
 * @name: name of dog
 * @age: dog's age in years
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes: */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
