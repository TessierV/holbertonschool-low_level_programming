#include "main.h"
/**
 *print_times_table - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
void print_times_table(int n)
{
	int c, r;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');
			for (r = 1; r <= n; r++)
			{
				int result = c * r;
				
				if (result <= 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
				else if (result <= 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(44);
					_putchar(32);
					_putchar(result / 100 + '0');
					_putchar(result / 10 % 10 + '0');
					_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
