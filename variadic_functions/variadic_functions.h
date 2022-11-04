#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/*type def*/
typedef struct print_all
{
	char all;
	void (*func)(va_list arguments);
}v_types;

/*Project - Putchar*/
int _putchar(char c);
/*Project 3*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
