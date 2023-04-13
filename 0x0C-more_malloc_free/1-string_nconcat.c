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

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	strcpy(ptr, s1);
	strncpy(ptr + strlen(s1), s2, n);

	ptr[strlen(s1) + n] = '\0';
	return (ptr);
}
