#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concat
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len_s1, len_s2;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	ptr = malloc(len_s1 + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strncpy(ptr + len_s1, s2, n);

	ptr[len_s1 + n] = '\0';

	return (ptr);
}
