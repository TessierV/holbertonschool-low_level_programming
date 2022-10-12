#include "main.h"
/**
 * _strncpy - read
 *@dest: pointer
 *@src: pointer
 *@n: variable
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
