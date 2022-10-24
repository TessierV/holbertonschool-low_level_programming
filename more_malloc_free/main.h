#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
/*Project 2 - More malloc Free - Mandatory - */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
/*Project 2 - More malloc Free - Advanced  - 2 tasks*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**/
#endif
