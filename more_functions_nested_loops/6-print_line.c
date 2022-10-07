#include "main.h"

/**
 * print_line - print ligne
 *@n: is the variable
 *
 *Description: print a ligne with a variable
 *Return: /n
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
