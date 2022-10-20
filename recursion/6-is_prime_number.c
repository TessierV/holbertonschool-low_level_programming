#include "main.h"
/**
 * is_prime_number - recursion
 * @n: variable
 *
 * Return: 0 or 1
 */

int check_prime(int i, int j)
{
	if (i <= 0 || i % j ==0 || i == 1)
	{
		return (0);
	}
	else if (i > j / 2)
	{
		return (1);
	}
	else 
	{
	return (check_prime(i, j + 1 ));
	}
} 

int is_prime_number(int n)
{
	int a = 2;
	return (check_prime(n, a));
}
