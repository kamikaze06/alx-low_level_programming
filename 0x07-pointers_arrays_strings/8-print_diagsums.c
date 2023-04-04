#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
