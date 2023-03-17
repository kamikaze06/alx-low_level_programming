#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * function that print the size of various types on the computer
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n",	sizeof(char));
	printf("Size of an int: %d byte(s)\n",	sizeof(int));
	printf("Size of a long int: %d byte(s)\n",	sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",	sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",	sizeof(float));
return	(0);
}
