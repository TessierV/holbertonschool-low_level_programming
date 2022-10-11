#include "main.h"
/**
 * strcpy - copy
 * @src: pointer
 * @dest: pointer
 *
 * Return: \n
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return s;
}
