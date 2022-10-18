#include "main.h"

/**
 * _isupper - is uppercase
 * @c: its the variable
 *
 *Description: if its an uppercase print 1
 *Return: 1 when true return false when 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
