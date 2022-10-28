#include "main.h"

/**
 * str_concat - concat two strings
 *
 * @s1: string
 * @s2: string 2
 * Return: NULL or return a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	grid = malloc(sizeof(int *) * height + 1);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width + 1);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid[i]);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
