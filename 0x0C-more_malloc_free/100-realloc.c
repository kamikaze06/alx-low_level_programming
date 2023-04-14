#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr:  pointer to the memory previously allocated
 * @old_size: int
 * @new_size: int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
