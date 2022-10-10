#include "main.h"
/**
 * print_rev - reverse the string
 * @str: pointer
 *
 * Return: \n
 */
void print_rev(char *str)
{
	int s = 0;
	
	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	for(; s >= 0; s--)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
