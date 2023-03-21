#include"main.h"
/**
 * print_alphabet
 *
 * Print alphabet in lowercase using _putchar
 *
 * Return: 0 on success, non-zero on failure
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
