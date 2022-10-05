#include "main.h"
/**
 *times_table - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
void times_table(void)
{
	int c, n;

	for (c = 0; c <= n; c++)
	{
		int result = c * n;
		_putchar(result + '0');
		_putchar(',');
		_putchar(' ');
	}
}
