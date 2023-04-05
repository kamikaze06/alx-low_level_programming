#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number
 *
 * Return:-1 If n is lower than 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
