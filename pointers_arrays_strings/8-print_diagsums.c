#include "main.h"
/**
 * print_diagsums - print recursive way a multi dimensional array
 * @a: array
 * size: array
 *
 * Return: print
 */
void print_diagsums(int *a, int size)
{
	int i, front, back;
	
	front = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		front = front + a[i];

	}
	back = 0;
	for (i = size - 1; i < size * size - 1; i = i + (size - 1))
	{
		back = back + a[i];
	}
	printf("%d, %d\n",  front, back);
}
