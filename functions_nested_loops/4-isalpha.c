#include "main.h"

#include <stdio.h>
/**
 *_isalpha - check is the character is an alphabetic
 *@c: its the name of the variable
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
