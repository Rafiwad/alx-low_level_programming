#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the struct dog variable to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
