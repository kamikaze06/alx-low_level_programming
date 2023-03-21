#include"main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * 
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a;

	a = 0;
	while (a <= 2)
	{
		_putchar(a + 48);
		_putchar('\n');
		a ++;
	}
}

