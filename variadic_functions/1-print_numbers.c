#include "variadic_functions.h"
/**
 * print_numbers - print all numbers only
 * @n: unsigned arguments
 * @separator: delimit
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list intarg;

	va_start(intarg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(intarg, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(intarg);
	printf("\n");
}
