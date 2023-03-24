#include"main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == 0 && i > 0)
				{
				_putchar(92);
				}
				else
				{
					_putchar(' ');
					_putchar(92);
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
