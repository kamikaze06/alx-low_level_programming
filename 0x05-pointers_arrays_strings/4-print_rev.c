#include"main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the pointer
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
