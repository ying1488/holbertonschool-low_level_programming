#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid-function that returns pointer to 2d array.
 * @width: column
 * @height: rows
 * return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int w = 0; 
	int h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	while (h < height)
	{
	array[h] = malloc(sizeof(int) * width);
	if (array[h] == NULL)
	{
		while (h > 0)
		{
			free(array[h - 1]);
			h--;
		}
		free(array);
		return (NULL);
	}

	while (w < width)
	{
		array[h][w] = 0;
		w++;
	}
	h++;
	}
	return (array);
}
