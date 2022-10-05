#include "main.h"
/**
 *print_last_digit - multiplication tab
 *@r: its the name of the variable
 * Return: \n
 */
int print_last_digit(int r)
{
	int last_digit;

	if (r <= 99 && r >= 10)
	{
		last_digit = r % 10;

		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if (r > 0 && r <= 9)
	{
		last_digit = r % 1;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if (r > 99)
	{
		last_digit = r / 10 % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = r / 10 % 10;
		_putchar('0' + last_digit);
		return (-last_digit);
	}
}
