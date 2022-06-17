#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog: struct type named dog
 * @name: name of the dog in char
 * @age: Its age in float
 * @owner: the name of the dog owner in char
 *
 * Description: the struct "dog" stores
 * the name, age and owner of a dog
 * Return: no return
 */


struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
