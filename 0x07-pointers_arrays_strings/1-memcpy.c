#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: pointer
 * @src: pointer
 * @n: bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
