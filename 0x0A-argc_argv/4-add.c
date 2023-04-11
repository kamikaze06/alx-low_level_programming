#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: always 0 (success)
 */
int check_num(char *str)
{
	unsigned int i ;

	i = 0;
	while (i < strlen(str))
	{
		 if (!isdigit(str[i]))
		 {
			 return (0);
		 }
		 i++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
