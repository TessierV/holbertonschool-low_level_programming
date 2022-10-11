#include "main.h"
/**
 * puts_half - return the half
 * @str: pointer
 *
 * Return: \n
 */
void puts_half(char *str)
{
	int s, i;

	s = 0;

	while (str[s] != '\0')
	{
		s++;
	}
	if (s % 2 == 0)
	{
		s = s / 2;
	}
	else
	{
		s = (s + 1) /2;
	}
	while (str[s] != '\0')
	{
		i = str[s];
		s++;
		putchar(i);
	}
	putchar('\n');
}
