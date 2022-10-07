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
	int n = 0;
	for(n = 0; n < 9; n++)
	{
		putchar(n);
		putchar('\n');
	}
}
