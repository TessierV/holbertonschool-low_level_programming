#include "main.h"
/**
 *times_table - multiplication tab
 *@n: its the name of the variable
 * Return: 0
 */
void times_table(void)
{
	int c, n, result;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 9; n++)
		{
			int result = c * n;
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');		
			_putchar(',');
		}
	}
	return(0)
}
