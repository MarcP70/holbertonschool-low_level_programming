#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees dogs
 * @d: The struct of new dog
 *
 */
void free_dog(dog_t *d)
{
	if (d->owner != NULL)
		free(d->owner);

	if (d->name != NULL)
		free(d->name);

	if (d != NULL)
		free(d);
}
