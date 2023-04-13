#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
