#include "dog.h"
#include <stddef.h> /* For NULL */

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:Thisfunction initializes a struct dog with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
