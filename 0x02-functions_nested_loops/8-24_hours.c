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
	int b;

	a = 0;
	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			_putchar(b + 48);
			_putchar(':');
			_putchar('\n');
			b++ ;
		}
		_putchar(a + 48);
		_putchar('\n');
		a ++ ;
	}
}

