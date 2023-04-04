#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer
 * @accept: character
 *
 * Return: pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr1 = s;

	while (*s != '\0')
	{
		char *ptr2 = accept;

		while (*ptr2 != '\0')
		{
			if (*s == *ptr2)
			{
				return (ptr1);
			}
			ptr2++;
		}
		s++;
		ptr1 = s;
	}
	return (NULL);
}
