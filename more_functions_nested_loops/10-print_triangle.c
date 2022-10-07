#include "main.h"

/**
 * print_triangle - print triangle
 *@size: is the variable
 *
 *Description: print a triangle
 *Return: /n
 */
void print_triangle(int size)
{
	int i;
	int r, p;

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
			}
			for (p = 0; p < size; p++)
			{
				putchar(46);
			}
			putchar('\n');
		}
	}
}
