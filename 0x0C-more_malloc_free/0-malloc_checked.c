#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -  allocates memory
 *
 * @b: size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b); /*allocates memory using malloc*/

	if (ptr == NULL) /*check if malloc fails*/
	{
		exit(98); /*normal process termination with a status value of 98*/
	}
	return (ptr); /*Returns a pointer to the allocated memory*/
}
