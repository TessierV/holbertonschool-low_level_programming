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
		s++;
	}
	for (; str[s] >= 0; s--)
	{
		putchar(str[s]);
	}
	putchar('\n');
}
