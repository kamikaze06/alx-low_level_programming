#include"main.h"
/**
 * print_last_digit - print the last digit of number
 *
 * @c: the integer number
 *
 * Return: 0
 */
int print_last_digit(int c)
{
	int last_digit;
	int i;

	i = _abs(c);
	last_digit = i % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
