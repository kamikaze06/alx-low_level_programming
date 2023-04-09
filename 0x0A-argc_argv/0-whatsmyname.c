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
	int i;

	i = 0;
	while (*program_name != '\0')
	{
		i++
	}
	i -= 1;
	 while (i >= 0 && program_name[i] != '/' && program_name[i] != '\\')
	 {
		 i--;
	 }
	 if (i >= 0)
	 {
		 program_name = &program_name[i + 1];
	 }
	while (*program_name != '\0')
	{
		_putchar(*program_name);
		program_name++;
	}
	return (0);
}
