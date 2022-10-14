#include "main.h"
/**
 * _strstr - scan the 1 first occurence of any character who is part of 2 and
 * return the character from 1.
 * @s: is the one who will be scanned
 * @accept: search between this list of character
 *
 * Return: s or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] == needle[j])
			{

				break;
			}
		}
		if (haystack[i] == needle[j])
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
