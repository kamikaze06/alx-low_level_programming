#include"main.h"
/**
 * print_sign - print the sign of number
 *
 * @n: the number to check
 *
 * Return: 1 if @n is > 0, 0 if @n = 0, -1 if @n is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}

}
