#include"main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase
 * @a: character
 * Return: a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'a') && (a[i] <= 'z'))
		{
			a[i] -= 'a' - 'A';
		}
	}
	return (a);
}
