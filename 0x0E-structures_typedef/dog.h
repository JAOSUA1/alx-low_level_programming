#ifndef DOG
#define DOG

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t(void);

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


struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
