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
	char i;

	for	(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for	(j = 'A'; j < 'Z'; j++)
	{
		putchar(j);
	}
	putchar(\n);
	return	(0);
}
