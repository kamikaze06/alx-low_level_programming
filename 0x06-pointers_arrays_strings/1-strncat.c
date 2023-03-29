#include"main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: character
 * @src: character
 * @n:  bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
	}
	src[j] = '\0';
	return (dest);

}
