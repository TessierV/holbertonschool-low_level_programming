#include "search_algos.h"
/**
 * linear_search - searches value of int with Linear
 * @array: pointer of the first element
 * @size: size
 * @value: value to search
 * Return: int value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
