#include "main.h"
/**
 * _puts - return the string
 * @str: pointer
 *
 * Return: \n
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
