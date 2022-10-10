#include "main.h"
/**
 * puts2 - return the string
 * @str: pointer
 *
 * Return: \n
 */
void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		putchar(str[s]);
		s++;
	}
	putchar('\n');
}
