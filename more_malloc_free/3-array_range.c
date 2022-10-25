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

	if (max < min || min < 0 || max < 0)
	{
		return (NULL);
	} 
	len = (max - min);
	s = malloc(len * sizeof(int) + 1);
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

