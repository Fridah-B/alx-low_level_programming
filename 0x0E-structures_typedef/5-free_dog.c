#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees pugs
 * @d: pointer to dog_t
 * Retuen: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
