#include"main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: character
 * @src: character
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	dest[i] = '\0';
	_putchar(' ');
	for (j = 0; src[j] != '\0'; j++)
	{
		_putchar(src[j]);
	}
	src[j] = '\0';
	return (dest);

}
