
#include"main.h"
/**
 * print_alphabet - function that print alphabet
 *
 * Print alphabet in lowercase using _putchar
 *
 * Return: 0 on success, non-zero on failure
 */
void print_alphabet(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
		_putchar(i);
	}
	_putchar('\n');
}
