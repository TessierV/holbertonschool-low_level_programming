#include "main.h"
/**
 * string_toupper - uppercase all letter from a string
 *@str: pointer
 *
 * Return: \n
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;

	}
	return (str);
}
