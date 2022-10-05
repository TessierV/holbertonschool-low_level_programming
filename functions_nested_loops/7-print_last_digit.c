#include "main.h"
/**
 *print_last_digit - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
int print_last_digit(int n)
{
	if (n <= 99)
	{
		int last = n % 10;
		_putchar(last + '0');

		return(last);
	}
	else
	{
		int last = n /10 %10;
		putchar(last + '0');
	}
}
