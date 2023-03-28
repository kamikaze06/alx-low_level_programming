#include<stdio.h>
#include"main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @a: pointer
 * @n:  number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;
	int j;

	i = n - 1;
	for (j = 0; j <= i; j++)
	{
		if (j = i)
		{
			printf("%d", a[j]);
		}
		else
		{
			printf("%d, ", a[j]);
		}
	}
	printf("\n");

}
