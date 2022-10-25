#include "main.h"

/**
 * array_range - range array
 * @min: min
 * @max: max
 *
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int i, len;

	if (max < min)
	{
		return (NULL);
	}
	len = (max - min);
	s = malloc(len * sizeof(int) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++)
	{
		s[i] = min;
		i++;
	}
	return (s);
}

