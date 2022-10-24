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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	else
	{
		len = strlen(s1);
		len = len + strlen(s2);
	}
	s = malloc((len) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (s1 != NULL)
		for (j = 0; s1[j] != '\0'; j++, i++)
		{
			s[i] = s1[j];
		}
	if (s2 != NULL)
		for (k = 0; s2[k] != '\0'; k++, i++)
		{
			s[i] = s2[k];
		}
	return (s);
}
