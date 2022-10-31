#include "dog.h"
/**
 * print_dog - print dog with exclusion
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		char *p = NULL;

		printf("Name: %s\n", d->name ? d->name : p);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : p);
	}
}
