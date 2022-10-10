#include "main.h"
/**
 * rev-string - reverse the string
 * @s: pointer
 *
 * Return: \n
 */
void rev_string(char *s)
{
	int len, c;
	char *begin, *end, temp;

	len = 0;
	c = 0;
	begin = s;
	end = s;

	for (c = 0; c < len - 1; c++)
	{
		end++;
	}
	for (c = 0; c < len/2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
