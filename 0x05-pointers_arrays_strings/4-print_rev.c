#include"main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the pointer
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
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

}
