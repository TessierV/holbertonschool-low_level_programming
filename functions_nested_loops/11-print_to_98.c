#include "main.h"

#include <stdio.h>
/**
 *11-print_to_98 - print to 98
 *@n: its the name of the variable
 * Return: 1 if true 0 if false
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n <= 98; n++ )
		{
			printf("%d", n);
			printf("%c",44);
			printf("%c",32);
		}
	}
	else if (n > 98)
	{
		for (n = 0; n >= 98; n--)
		{
			printf("%d", n);
			printf("%c", 44);
			printf("%c", 32);
		}
	}
	else
	{
		printf("%d", n);
		printf("%c",32); 
	}
}
