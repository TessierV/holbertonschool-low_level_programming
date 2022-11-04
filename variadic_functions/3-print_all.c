#include "variadic_functions.h"
/**
 * print_char - character
 * @arguments: list of arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_args(arguments, char));
}

/**
 * print_int - integers
 * @arguments: arguments
 */
void print_int(va_list arguments)
{
	printf("%d", (va_args(arguments, int));
}

/**
 * print_float - float
 * @arguments: arguments
 */
void print_float(va_list arguments)
{}

/**
 * print_string - string
 * @arguments: arguments
 */
void print_string(va_list arguments)
{
}


