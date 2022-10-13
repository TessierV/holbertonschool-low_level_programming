#include "main.h"
/**
 * leet - encode
 * @s: pointer
 *
 * Return: @s
 */
char *leet(char *s)
{
	int i, j;
	char *alpha = "aAeEoOtTlL";
	char *num = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; alpha[j] != '\0' && num[j] != '\0'; j++)
		{
			if (alpha[j] == s[i])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
