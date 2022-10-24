#include "main.h"

/**
 * create_array - creates an array of char
 *
 * @size: size of the array
 * @c: initialise the array
 * 
 * Return: NULL or pointer of the array:
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
