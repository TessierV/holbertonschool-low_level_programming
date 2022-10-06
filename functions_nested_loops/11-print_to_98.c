#include "main.h"

#include <stdio.h>
/**
 *11-print_to_98 - print to 98
 *@n: its the name of the variable
 *
 * Description: this fonction will print to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf("%c", 44);
				printf("%c", 32);
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf("%c", 44);
				printf("%c", 32);
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
