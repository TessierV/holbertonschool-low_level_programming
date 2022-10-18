#include "main.h"
/**
 * _strlen - search the size
 * @s: pointer
 * Return: return 0
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
