#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory.
 * @b: The size of the allocated memory.
 * Return: A pointer to the allocated memory
 * or 98 status value if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}

	return (p);
}
