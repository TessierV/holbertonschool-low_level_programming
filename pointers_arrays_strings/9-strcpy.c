#include "main.h"
/**
 * *_strcpy - copy
 * @src: pointer
 * @dest: pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	src[i] = '\0';
	return (dest);
}
