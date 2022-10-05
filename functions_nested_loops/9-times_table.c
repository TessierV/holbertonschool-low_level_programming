#include "main.h"
/**
 *times_table - multiplication tab
 *@n: its the name of the variable
 * Return: 0
 */
void times_table(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 9; n++)
		{
			int result = c * n;

			if (result <= 9){
				_putchar(result + '0');
				_putchar(',');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(',');

		}
		_putchar('\n');
	}
	
}
