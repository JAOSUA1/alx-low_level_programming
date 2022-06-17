#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct type named dog
 * @name: name of the dog in char
 * @age: Its age in float
 * @owner: the name of the dog owner in char
 *
 * Description: struct "dog" stores
 * the name, age and owner of a dog
 * Return: no return
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

int main
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
