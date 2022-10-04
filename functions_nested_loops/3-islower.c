#include "main.h"

#include <stdio.h>
/**
 *_islower - check is the character is a lowercase
 *
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
