#include"main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(49);
			}
			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
