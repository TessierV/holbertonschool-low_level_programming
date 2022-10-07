#include "main.h"

/**
 * print_diagonal - print ligne
 *@n: is the variable
 *
 *Description: print a ligne with a variable
 *Return: /n
 */
void print_diagonal(int n)
{
	int i;
	int r;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (r = 0; r < i; r++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
