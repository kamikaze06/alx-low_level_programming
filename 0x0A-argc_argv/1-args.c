#include "main.h"

/**
 * main - main function
 * @argc: count
 * @argv: character
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count;
	int digit;
	
	count = argc - 1;

	while (count > 0)
	{
		digit = count % 10;
		_putchar(digit + '0');
		count /= 10;
	}

	_putchar('\n');
	return (0);
}
