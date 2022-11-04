#include "variadic_functions.h"

/**
 *print_all - print all
 *@format - input
 */
/*
void print_all(const char * const format, ...)
{
	v_types print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_list arguments;
	va_start(arguments, format);

	int i, j;
	j = 0;

	while (format[j])
	{
		i = 0;
		while (print[i].all)
		{
			if (print[i].all == *format)
			{
				print[i].func(arguments);
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arguments);
}
*/
/**
 * print_char - character
 * @arguments: list of arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - integers
 * @arguments: arguments
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));			
}

/**
 * print_float - float
 * @arguments: arguments
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - string
 * @arguments: arguments
 */

void print_string(va_list arguments)
{
	printf("%s", va_arg(arguments, char*));
}

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	v_types print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_list arguments;
	va_start(arguments, format);

	j = 0;

	while (format[j])
	{
		i = 0;
		while (print[i].all)
		{
			if (print[i].all == *format)
			{
				print[i].func(arguments);
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arguments);
}
