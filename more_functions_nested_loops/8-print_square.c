#include "main.h"

/**
 * print_square - print ligne
 *@size: is the variable
 *
 *Description: print a square
 *Return: /n
 */
void print_square(int size)
{
	int i;
	int r;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (r = 0; r < size; r++)
			{
				putchar(35);
				putchar('\n');
			}
			putchar(35);
		}
	}
}
