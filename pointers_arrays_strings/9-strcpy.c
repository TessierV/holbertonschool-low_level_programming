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
	int s;

	for (s = 0; *(src + s) != '\0'; s++)
	{
		dest[s] = src[s];
	}
	dest[s] = '\0';
	return (dest);
}
