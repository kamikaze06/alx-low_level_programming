#include "main.h"
/**
 * check_if_prime - checks if an int is prime num
 * @a: int
 * @b: int
 * Return: int
 */
int check_if_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (check_if_prime(a + 1, b));
	}
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_if_prime(2, n));
}
