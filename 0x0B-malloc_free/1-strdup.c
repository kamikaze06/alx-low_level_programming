#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer (succes) NULL (insufficient memory)
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate_str = malloc(sizeof(char) * (strlen(str) + 1));

	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str) + 1; i++)
	{
		duplicate_str[i] = str[i];
	}
	return (duplicate_str);
}
