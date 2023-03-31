#include"main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @a: character
 * Return: a
 */

char *cap_string(char *a)
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
