#include "main.h"
/**
 * print_rev - reverse the string
 * @str: pointer
 *
 * Return: \n
 */
void print_rev(char *str)
{
	int len, s;
	len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}	
	s = len - 1;
	for (; s >= 0; s--)
	{
		putchar(str[s]);
	}
	putchar('\n');
}
