#include "variadic_functions.h"
/**
 * sum_them_all - summary all arguments
 * @n: unsigned arguments
 * Return: 0 or summary
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list intarg;

	if (n == 0)
	{
		return (0);
	}
	va_start(intarg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(intarg, int);
	}
	va_end(intarg);
	return (sum);
}
