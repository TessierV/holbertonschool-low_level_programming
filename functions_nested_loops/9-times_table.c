#include "main.h"
/**
 *times_table - multiplication tab
 * Return: 0
 */
void times_table(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			int result = c * n;

			if (result <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
