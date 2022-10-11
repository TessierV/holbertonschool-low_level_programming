#include "main.h"
/**
 * puts_half - return the half
 * @str: pointer
 *
 * Return: \n
 */
void puts_half(char *str)
{
	int s,i, j;
	s = 0;

	while (str[s] != '\0')
	{	
		s++;
	}
	j = s;
	i = (j + 1) / 2;
	while (i <= j)
	{ 
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
