#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to fill in the array
 * Return: A pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
	return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}

	return (s);
}
