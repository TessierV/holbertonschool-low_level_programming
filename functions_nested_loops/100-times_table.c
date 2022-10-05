#include "main.h"

#include <stdio.h>
/**
 *print_times_table - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
void print_times_table(int n)
{
	int c, r;

	if (n >= '0' && n <= '15')
	{
		for (c = '0'; c <= n; c++)
		{
			for (r = '0'; r <= n; r++)
			{
				int result = c * r;
				_putchar(result);
				putchar(',');
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
