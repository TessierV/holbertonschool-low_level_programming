#include "main.h"

/**
 * print_most_numbers - print n in parameter
 *
 *Description: print from 0 - 9
 *Return: the result
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50  && n != 52)
		putchar(n);
	}
	putchar('\n');
}
