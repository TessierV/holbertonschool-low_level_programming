#include "main.h"

#include <stdio.h>
/**
 *print_sign - check the sign of the number
 *@n: its the name of the variable
 * Return: 1 if true 0 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n == 0)
	{
		printf('0');
		return (0);
	}
	else
	{
		printf('-');
		return (-1);
	}
}
