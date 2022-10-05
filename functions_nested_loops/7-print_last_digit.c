#include "main.h"
/**
 *print_last_digit - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
int print_last_digit(int r)
{
	int last_digit;
	if (r <= 99)
	{
		last_digit = r % 10;

		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if(r > 99)
	{
		last_digit = r /10 %10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		int last_digit = last_digit * -1;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
