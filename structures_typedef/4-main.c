#include <stdio.h>
#include <stdlib.h> /* For free */
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("Myes %s, nd I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
