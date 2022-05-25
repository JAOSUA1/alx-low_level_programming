#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * dem - typedef for the structure
 * struct dog - makes a new structure type named dog
 * @name: name of the dog in char
 * @age: Its age in float
 * @owner: the name of the dog owner in char
 *
 * Return: no return
 */

typedef struct dog dem;

struct dog
{
	char *name;
	char *owner;
	float age;
}

#endif
