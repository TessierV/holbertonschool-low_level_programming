#include "main.h"

/**
 * _isdigit - is Digital
 * @c: its the variable
 *
 *Description: if its a number print 1
 *Return: 1 when true return false when 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
