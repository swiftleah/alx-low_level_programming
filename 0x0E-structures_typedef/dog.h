#ifndef DOG_H
#define DOG_H

/* Libraries: */
#include <stdio.h>
#include <stdlib.h>

/* Prototypes: */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


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

#endif
