#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a zero intialised 2D array of integers
 * @width: the array's width (no. of cols)
 * @height: the array's height (no. of rows)
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	
	/* Creates a 2d-array (in the stack) which is an array of 'height' pointers to integers  and a pointer to that array*/
	int *arr[height];
	int **arr_2D = arr;

	/*
	 * Where each pointer will be set to point to a contigous memory allocated for 'width' integer elements
	 * 	 |--->ptr1 --> [1,  2,  3]
	 * arr-->|--->ptr2 --> [5,  6,  7]
	 * 	 |--->ptr3 --> [9, 10, 11]
	 * This makes arr (whose name is a const pointer) a pointer to pointers
	 */

	if (width <= 0 || height <= 0)
		return (NULL);
	
	/* Points each pointer to a contigous memory of 'width' integers */
	for (i = 0; i < height; i++)
		arr_2D[i] = (int *)malloc(width * sizeof(int));

	if (arr_2D == NULL)
		return (NULL);

	/* Intialize each integer allocated memory to zero */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_2D[i][j] = 0;
	}
	return (arr_2D);
}
