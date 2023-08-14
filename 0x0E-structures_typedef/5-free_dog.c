#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function to free dog.
 * @d: pointer to dog to free.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != (void *)0)
	{
		if (d->name != (void *)0)
			free(d->name);
		if (d->owner != (void *)0)
			free(d->owner);
		free(d);
	}
}

