#include "main.h"
/**
 * _strlen_recursion - recursion
 * @s: pointer
 *
 * Return: *s len
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return 1;
	}
	else
	{
		return  (1 + (_strlen_recursion(s + 1)));
	}
}
