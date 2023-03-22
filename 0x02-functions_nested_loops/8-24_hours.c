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
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		_putchar(hour / 10 + 48);
		_putchar(hour % 10 + 48);
		_putchar(':');
		_putchar(minute / 10 + 48);
		_putchar(minute % 10 + 48);
		_putchar('\n');
		minute++ ;
		if (minute == 60)
		{
			minute = 0;
			hour++;
		}
	}
}
