#include"main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * return: 1 if c is an uppercase character, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
