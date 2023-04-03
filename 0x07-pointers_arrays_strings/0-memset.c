#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointed destination
 * @b: Constant byte
 * @n: Bytes
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < 10; i++)
	{
	s[i] = b;
	}
	return (s);
}
