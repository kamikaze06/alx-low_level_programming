#include"main.h"
/**
 * print_last_digit - print the last digit of number
 *
 * @c: the integer number
 *
 * Return: 0
 */
int print_last_digit(int c)
{
        int last_digit;

        if (c >=0)
        {
                last_digit = c % 10;
                _putchar(last_digit + 48);
                return (last_digit);
        }
        else
        {
                c = -1 * c;
                last_digit = c % 10;
                _putchar(last_digit + 48);
                return (last_digit);
        }
}
~      }
