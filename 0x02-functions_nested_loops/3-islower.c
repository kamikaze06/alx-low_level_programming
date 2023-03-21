#include"main.h"
/**
 * _islower(int c) -  checks for lowercase character
 * &c is the parametre to check
 *  checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
