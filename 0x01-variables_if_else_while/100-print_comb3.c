#include <stdio.h>
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
	int j;

	for	(i = 0; i <= 9; i++)
	{
		for	(j = 0; j <= 9; j++)
		{
			if	(i == j)
			{
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return	(0);
}
