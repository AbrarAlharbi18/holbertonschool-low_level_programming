#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* For NULL */
#include <stdlib.h> /* For malloc and free */

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function prototype for print_dog */
void print_dog(struct dog *d);

/* Function prototype for new_dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Function prototype for free_dog */
void free_dog(dog_t *d);

#endif /* DOG_H */
