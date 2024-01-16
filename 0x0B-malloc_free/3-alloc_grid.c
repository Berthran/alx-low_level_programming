#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int *initialize(int *row, int height);

/**
 * alloc_grid - creates a 2D array of zeros
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL on failure, 2D array on success
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}

		grid[i] = initialize(grid[i], width);
	}
	return (grid);
}


/**
 * initialize - initializes an array with a value
 * @row: pointer to the array
 * @n: number of elements in the array
 *
 * Return: initialized array
 */

int *initialize(int *row, int n)
{
	int j;

	for (j = 0; j < n; j++)
		row[j] = 0;
	return (row);
}
