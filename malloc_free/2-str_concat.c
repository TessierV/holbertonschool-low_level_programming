#include "main.h"

/**
 * str_concat - concat two strings
 *
 * @s1: string
 * @s2: string 2
 * Return: NULL or return a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, len;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL && s2 == NULL)
	{
		len = strlen(s1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		len = strlen(s2);
	}
	else if (s1 != NULL && s2 != NULL)
	{
		len = strlen(s1);
		len = len + strlen(s2);
	}
	s = malloc((len) + 1);
	if (s == NULL)
	{
		return ("");
	}
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		s[i] = s1[j];
		j++;
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		s[i] = s2[k];
		k++;
		i++;
	}
	return (s);
}
