#include"main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		_putchar(a + 48);
		a++;
	}
	_putchar('\n');
}
