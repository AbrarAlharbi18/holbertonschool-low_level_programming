#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog_t structure.
 * @d: A pointer to the dog_t structure to free.
 *
 * Description: This function frees the memory allocated for the name, owner,
 *              and the dog_t structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the name and owner strings */
	free(d->name);
	free(d->owner);

	/* Free the dog_t structure */
	free(d);
}
