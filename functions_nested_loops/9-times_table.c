#include "main.h"
/**
 *print_times_table - multiplication tab
 *@n: its the name of the variable
 * Return: \n
 */
void times_table(void)
{
	int c, r;

	for (c = 0; c <= n; c++)
	{
		for (r = 0; r <= n; r++)
		{
			int result = c * r;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			}
			putchar('\n');
		}
	}
}
