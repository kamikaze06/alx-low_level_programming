#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (-1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (_atoi(argv[i]) <= 48 && _atoi(argv[i]) >= 57)
			{
				break;
			}
			printf("Error");
			return (1);
		}
		for (i = 0; i < argc; i++)
		{
			if (_atoi(argv[i]) >= 48 && _atoi(argv[i]) <= 57)
			{
				sum += _atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
