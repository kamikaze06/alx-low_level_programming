#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Print exactly a sentence
 *
 * Return: 1 on success
 */
int main(void)
{
	fflush(stdout);
	dup2(fileno(stderr),	fileno(stdout));
	printf("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
return	(1);
}
