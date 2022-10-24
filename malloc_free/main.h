#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/*Project 1 - Malloc Free - Mandatory - */
char *create_array(unsigned int size, char c); 
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
/*Project 1 - Malloc Free - Advanced  - 2 tasks*/
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
