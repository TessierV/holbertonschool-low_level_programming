#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: delimit
 * @n: unsigned arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;
	va_list intarg;


	va_start(intarg, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(intarg, char*);
		if (intarg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("");
		}
		if (separator != NULL || i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(intarg);
	printf("\n");
}
