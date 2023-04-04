#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer
 * @accept:character
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number_of_bytes;

	number_of_bytes = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				number_of_bytes++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (number_of_bytes);
}
