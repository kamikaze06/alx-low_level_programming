#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **dimensional_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dimensional_array = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		dimensional_array[i] = malloc(sizeof(int) * width);
		if (dimensional_array[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
			{
				free(dimensional_array[i]);
			}
			free(dimensional_array[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dimensional_array[i][j] = 0;
		}
	}
	return (dimensional_array);
}
