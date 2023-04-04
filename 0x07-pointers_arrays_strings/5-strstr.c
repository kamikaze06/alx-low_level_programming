#include "main.h"

/**
 * *_strstr -  locates a substring
 *
 * @haystack: character
 * @needle: character
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr2 != '\0' && *ptr2 == *ptr1)
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
