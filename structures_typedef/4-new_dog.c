#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	unsigned int i;
	int nameLen, ownLen;

	nameLen = strlen(name);
	ownLen = strlen(owner);
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);
	poppy->name = malloc(nameLen + 1);
	if (poppy->name == NULL)
	{
		free(poppy);
		free(poppy->name);
		return (NULL);
	}
	poppy->owner = malloc(ownLen + 1);
	if (poppy->owner == NULL)
	{
		free(poppy);
		free(poppy->name);
		free(poppy->owner);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		poppy->name[i] = name[i];
	poppy->name[i] = '\0';
	poppy->age = age;
	for (i = 0; i < strlen(owner); i++)
		poppy->owner[i] = owner[i];
	poppy->owner[i] = '\0';
	return (poppy);
}
