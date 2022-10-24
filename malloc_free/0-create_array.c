#include "main.h"

/**
 * create_array -
 *@size: size of the array
 *@c: initialise the array
 * return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	for (; i < size || buffer[i] == '\0'; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
