#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - main function
 * @argc: count
 * @argv: character
 * Return: int
 */

int main(int argc, char *argv[])
{
	char *program_name = argv[argc - argc];

	while (*program_name != '\0')
	{
		_putchar(*program_name);
		program_name++;
	}
	return (0);
}
