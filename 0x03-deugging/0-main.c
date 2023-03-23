#include<stdio.h>
#include"main.h"
/**
 * main - tests function that prints if int is + or -
 * return: 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if      (n > 0)
        {
                printf("%d is positive\n",      n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n",  n);
        }
        else if (n < 0)
        {
                printf("%d is negative\n",      n);
        }
        return (0);
}
