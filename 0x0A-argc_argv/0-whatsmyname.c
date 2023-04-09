#include "main.h"

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
	_putchar('\n');
	return (0);
}
