#include "main.h"
/**
 * rev-string - reverse the string
 * @s: pointer
 *
 * Return: \n
*/
void rev_string(char *s)
{
	int i, rev;
	char a, b;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	rev = i / 2;
	while (rev >= 0)
	{
		a = s[i - rev];
		b = s[rev];
		s[rev] = a;
		s[i - rev] = b;
		rev--;
	}	
}
