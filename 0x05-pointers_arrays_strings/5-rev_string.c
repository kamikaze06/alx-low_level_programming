#include"main.h"

/**
 * rev_string -  reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		len++;
		s++;
	}
	s--;
	while (len != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');

}
