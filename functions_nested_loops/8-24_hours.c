#include "main.h"

#include <stdio.h>
/**
 *_abs - check is the character is an alphabetic
 *@r: its the name of the variable
 * Return: 1 if true 0 if false
 */
void jack_bauer(void)
{
	int h, m;

	for (h <= 0; h < 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			_putchar((h % 10 + '0'));
			_putchar((m % 10 + '0'));
			_putchar('\n');
		}
	}
}
