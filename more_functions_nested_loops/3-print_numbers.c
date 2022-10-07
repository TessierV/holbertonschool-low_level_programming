#include "main.h"

/**
 * print_numbers - print
 * @n: its the variable
 *
 *Description: print from 0 - 9
 *Return: the result
 */
void print_numbers(void)
{
	int n;
	for(n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
