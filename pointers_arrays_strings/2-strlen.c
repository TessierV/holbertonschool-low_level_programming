#include "main.h"
/**
 * _strlen - search the size
 * @char : pointer
 * @count : pointer
 */
int _strlen(char *s)
{
	unsigned int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
