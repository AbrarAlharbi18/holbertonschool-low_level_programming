#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	printf("Mmeis %s,Iam %.2f, and my owner is %s\n", my_dog->name, my_dog->age, my_dog->owner);
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
