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

	last_digit = c % 10;
	_putchar('0' + c);
	return (last_digit);
}
