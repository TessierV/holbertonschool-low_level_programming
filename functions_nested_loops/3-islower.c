#include "main.h"

#include <stdio.h>
/**
 *_islower - check is the character is a lowercase
 *
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (97 >= c && c <= 122)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
