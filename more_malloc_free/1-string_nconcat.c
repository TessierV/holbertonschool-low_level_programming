#include "main.h"

/**
 * string_nconcat - concat two strings
 *
 * @s1: string
 * @s2: string 2
 * @n: variable for the size of s2
 * Return: NULL or return a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = 0, j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n < k)
	{
		k = n;
	}
	if (n > k)
	{
		n = k;
	}
	len = j + n;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (i < j)
			s[i] = s1[i];
		else
			s[i] = s2[i - j];
	}
	s[i] = '\0';
	return (s);
}
