#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

typedef struct dog dem;

/**
 * dem - typedef for the structure
 * struct dog - makes a new structure type named dog
 * @name: name of the dog in char
 * @age: Its age in float
 * @owner: the name of the dog owner in char
 *
 * Description: the struct referred to as "dog" stores 
 * the name, age and owner of a dog
 * Return: no return
 */


struct dog
{
	char *name;
	char *owner;
	float age;
}

#endif
