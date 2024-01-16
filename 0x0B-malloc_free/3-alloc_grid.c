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
	int **matrix;

	/* Check value of width and height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Create ptr to array of pointers */
	matrix = (int **)malloc(sizeof(int *) * height);
	/* Handle malloc error */
	if (matrix == NULL)
		return (NULL);

	/* Create array of integers */
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);
		/* Handle malloc error */
		if (matrix[i] == NULL)
		{
			while (i-- >= 0) /* Start deallocation from last allocated block */
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		/* If allocation successful, initialize */
		matrix[i] = initialize(matrix[i], width);
	}
	return (matrix);
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
