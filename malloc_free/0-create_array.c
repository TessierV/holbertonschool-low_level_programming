#include "main.h"

/**
 * 0-create_array - create an array
 *
 * @size: size of the array
 * @c: initialise the array
 * return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;
	
	buffer = malloc(size * sizeof(char));

	if (size == 0 || buffer == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (; i < size || i == '\0'; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
