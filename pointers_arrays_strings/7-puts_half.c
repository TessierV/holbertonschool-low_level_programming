#include "main.h"
/**
 * puts_half - return the half
 * @str: pointer
 *
 * Return: \n
 */
void puts_half(char *str)
{
	int s, i, j;
	
	s = 0;

	while (str[s] != '\0')
	{
		s++;
	}
	j = s;
	i = j / 2;
	for (; i <= j; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
