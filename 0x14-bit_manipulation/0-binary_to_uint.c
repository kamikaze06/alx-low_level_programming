#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: number to convert
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	unsigned int i = 0;
	int len = strlen(b);
	const char *ptr = b + len - 1;

	if (b == NULL)
	{
		return (0);
	}

	while (ptr >= b)
	{
		if (*ptr != '0' && *ptr != '1')
		{
			return (0);
		}

		uint += (*ptr - '0') * (1 << i);
		ptr--;
		i++;
	}

	return (uint);
}
