#include "main.h"

/**
 * more_numbers - print 0 - 14
 *
 *Description: print 0 - 14 x 10
 *Return: the result
 */
void more_numbers(void)
{
	int n, x;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n < 14; n++)
		{
			_putchar(n / 10 + '0');
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
