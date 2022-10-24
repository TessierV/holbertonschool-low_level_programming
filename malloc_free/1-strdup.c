#include "main.h"

/**
 * _strdup - duplicate a string
 *
 * @str: string who need to be fill in the array
 * Return: NULL or return a pointer of the duplicate string
 */

char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	s = malloc(strlen(str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (; i < len || str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
