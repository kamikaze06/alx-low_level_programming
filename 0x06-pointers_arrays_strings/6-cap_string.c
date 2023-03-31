#include"main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @a: character
 * Return: a 
 */

char *cap_string(char *a)
{
	int i;
	int j;
	char s[] = " \n\t,;.!?\"(){}";

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 'a' - 'A';
	}

	for (i = 1; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (a[i - 1] == s[j])
			{
				a[i] -= 'a' - 'A';
			}
		}
	}
	return (a);
}
