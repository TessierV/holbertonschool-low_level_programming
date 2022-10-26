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
	len = abs(max - min) + 1;
	s = malloc(len * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		s[i] = min;
}
	return (s);
}

