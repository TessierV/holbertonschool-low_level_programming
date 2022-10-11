#include "main.h"
/**
 * print_array - print an array
 * @n: is the number of the element
 * @a: its a pointer
 *
 * Return: \n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}
