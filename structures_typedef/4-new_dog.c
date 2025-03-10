#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t.
 *         If the function fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	/* Allocate memory for the dog_t structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Calculate lengths of name and owner */
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* Allocate memory and copy the name */
	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	/* Allocate memory and copy the owner */
	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	/* Assign values to the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
