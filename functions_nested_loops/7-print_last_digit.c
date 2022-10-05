#include "main.h"
/**
 *print_last_digit - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
int print_last_digit(int n)
{
	int last = n % 10;
	_putchar(last + '0');

	return(last);
}
