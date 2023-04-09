#include <stdio.h>
#include "main.h"

/**
 * multiplies two numbers
 *
 * @argc: number of arguments
 * #argv: array of arguments
 *
 * Return: 1 If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
