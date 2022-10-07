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
	int r;
	
	if (size <= 0)
	{
		putchar('\n');
	}else
	{
		for (i = 0; i < size; i++)
		{
			for (r = 1; r < (size - i); r++)
			{
				putchar(32);
			}
			for (r--; r < size; r++)
			{
				putchar(35);
			}
		putchar('\n');
		}
	}
}
