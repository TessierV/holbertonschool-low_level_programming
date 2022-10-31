#include "dog.h"
/**
 * free_dog - free the dog
 * @d: pointer
 */

void free_dog(struct dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
