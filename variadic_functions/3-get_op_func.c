#include "variadic_functions.h"
/**
 * get_op_func - get func
 * @s: pointer
 *
 * Return: Null
 */
void print_all(const char * const format, ...)
{
	v_types print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	va_list arguments;
	va_start(arguments, format);

	int i;

	i = 0;
	while (print[i].all)
	{
		if (print[i].all[0] == *s)
		{
			return (print[i].f);
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
