#include "main.h"
/**
 * is_prime_number - recursion
 * @n: variable
 *
 * Return: 0 or 1
 */

int check_prime(int i, int j)
{
	if (i <= 0 || i == 1 || i % j == 0)
	{
		return (0);
	} 
	else
	{
		return (1);
	}
	return (check_prime(i, j + 1 ));
} 

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}
