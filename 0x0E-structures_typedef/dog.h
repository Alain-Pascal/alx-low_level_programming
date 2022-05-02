#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* prototype of function init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* prototype of function print_dog */
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct do
 */
typedef struct dog dog_t;

/* prototype of function new_dog */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
