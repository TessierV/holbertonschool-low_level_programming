#include "main.h"

#include <stdio.h>
/**
 * main - print_alphabet a lowercase alphabet
 *
 * Return: newline
 */
void print_alphabet_x10(void)
{
	int y = 0;
	char i = 'a';

	for (y = 0; y <= 9; y++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
