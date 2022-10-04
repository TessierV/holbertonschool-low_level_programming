#include "main.h"

#include <stdio.h>
/**
 *_islower - check is the character is a lowercase
 *
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	char c;

	if (97 >= c && c <= 122)
	{
		putchar(0);
	}
	else
	{
		putchar(1);
	}
	putchar('\n');
}
