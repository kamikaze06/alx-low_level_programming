#include "main.h"

/**
 * main - main function
 * @argc: count
 * @argv: character
 * Return: int
 */

int main(int argc)
{
	int digit;

	while (argc > 0)
	{
		digit = argc % 10;
		_putchar(argc + '0');
		argc /= 10;
	}
	return (0);
	_putchar('\n');
}
