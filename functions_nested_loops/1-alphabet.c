#include "main.h"

#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

char print_alphabet(void)	
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
