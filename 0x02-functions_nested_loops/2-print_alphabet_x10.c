#include"main.h"
/**
 * print_alphabet - function that print alphabet
 *
 * Print alphabet in lowercase using _putchar
 *
 * Return: 0 on success, non-zero on failure
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char i ;

	while (j <= 10)
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
