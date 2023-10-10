#include "dog.h"

/**
 * free_dog -  frees dogs.
 * @dog_t *d: the pointer to the dog
 */


void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
