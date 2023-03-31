#include"main.h"

/**
 * *leet - encodes a string into 1337
 * @a: character
 * Return: a
 */

char *leet(char *a)
{
	int i;
	int j;
	char x[] = {a, A, e, E, o, O, t, T, l, L};
	char z[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; a[i] != '\0';i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == x[j])
			{
				a[i] = z[j];
			}
		}
	}
	return (a);


}
