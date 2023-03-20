#include "dog.h"
#include <stdlib.h>

/**
 * free__dog - This function frees dogs
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
