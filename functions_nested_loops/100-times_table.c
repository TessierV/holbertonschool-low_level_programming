#include "main.h"

#include <stdio.h>
/**
 *print_times_table - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
void print_times_table(int n)
{
	int c, r, result;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			for (r = 0; r <= n; r++)
			{
				result = r * c;
				putchar(result);
				putchar(44);
			}
		}
	}
	else
	{
		putchar('\n');
	}
}
