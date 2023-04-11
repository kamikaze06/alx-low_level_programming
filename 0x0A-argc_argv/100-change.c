#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success), 1(Error)
 */

int main(int argc, char *argv[])
{
	int i, num_argv, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_argv = atoi(argv[1]);
	change = 0;

	if (num_argv < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num_argv >= 0; i++)
	{
		while (num_argv >= coins[i])
		{
			change++;
			num_argv -= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}

