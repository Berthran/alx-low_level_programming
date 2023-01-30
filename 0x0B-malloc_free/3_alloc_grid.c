#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a zero intialised 2D array of integers
 * @width: the array's width
 * @height: the array's height
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr_2D; 
	
	/* Each starting element in each row is a pointer to 
	 * other elements in the same row
	 * 0 --> [1,  2,  3]
	 * 4 --> [5,  6,  7]
	 * 8 --> [9, 10, 11]
	 * That is they are pointers to integers.
	 */


	if (width <= 0 || height <= 0)
		return (NULL);
	/* Next we create a memory space to hold these row 
	 * pointers
	 */
	arr_2D = (int **)malloc(height * sizeof(int));

	if (arr_2D == NULL)
		return (NULL);
	
	/* Next, we create memory space for other elements of
	 * in each row and point that space to the first elements
	 * in each row
	 */

	for (i = 0; i < height; i++)
		arr_2D[i] = malloc(width * sizeof(int));

	/* Next, we intialize all the elements to zero */

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_2D[i][j] = 0;
	}
	return (arr_2D);
}
