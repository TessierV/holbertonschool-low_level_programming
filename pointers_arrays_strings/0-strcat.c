#include "main.h"
/**
 * string_toupper - uppercase all letter from a string
 *@str: pointer
 *
 * Return: \n
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i] = src[j]))
	{
		j++;
	}
	return (dest);
}
