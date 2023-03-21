#include"main.h"
/**
 * print_alphabet_x10 - function that print alphabet 10 times
 *
 * Print alphabet in lowercase using _putchar 10 times
 *
 * Return: 0 on success, non-zero on failure
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char i;

	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
		j++;
	}
}
