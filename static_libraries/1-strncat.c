#include "main.h"
/**
 * _strncat - read
 *@dest: pointer
 *@src: pointer
 *@n: variable
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && (dest[i] = src[j]) != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
