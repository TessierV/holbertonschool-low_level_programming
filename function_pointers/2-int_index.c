#include "function_pointers.h"

/**
 * int_index - function search an integer
 * @array: array
 * @size: size array
 * @cmp: pointer
 *
 * Return: -1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
