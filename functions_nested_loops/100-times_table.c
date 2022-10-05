#include "main.h"

#include <stdio.h>
/**
 *_isalpha - check is the character is an alphabetic
 *@c: its the name of the variable
 * Return: 1 if true 0 if false
 */
void print_times_table(int n)
{
	int c = 0, r = 0, timetab = c * r;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			for (r = 0; r <= n; r++)
			{
				timetab = c * r;
				putchar(44);
			}
		}
	}
	else
	{
		putchar(0);
	}
}
