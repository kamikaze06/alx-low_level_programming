#include<stdio.h>
/**
 * main - Entry point for the program
 *
 * Print with printf
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	int i;

	for	(i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return	(0);
}
