#include "search_algos.h"
/**
 * binary_search - searches value of int with binary
 * @array: pointer of the first element
 * @size: size
 * @value: value to search
 * Return: int value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, l, r;
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i < r; i++)
			printf("%d\n ", array[i]);
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
