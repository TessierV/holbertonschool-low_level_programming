#include "main.h"
/**
 * check_recursion - check
 * @i: variable
 * @j: variable
 *
 * Return: 0 or 1
 */

int check_recursion(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j > i / 2 || i <= 0)
	{
		return (-1);
	}
	else
	{
	return (check_recursion(i, j + 1));
	}
}

/**
 * _sqrt_recursion - prime recursion function
 *
 * @n: variable
 * Return: the check_prime
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (check_recursion(n, a));
}
