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

	len = strlen(str);
	s = malloc(len + 1);

	if (s == NULL || str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (; i < len || i == '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
