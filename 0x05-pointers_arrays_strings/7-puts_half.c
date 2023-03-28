#include"main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int len;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	len = i + 1;

	if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

