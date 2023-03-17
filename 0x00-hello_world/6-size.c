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
        printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n, sizeof(char) ,sizeof(int) ,sizeof(long int) ,sizeof(long long int) ,sizeof(float));
        return (0);
}
