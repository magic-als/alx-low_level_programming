#include "main.h"

/**
 * print_rev - Prints a string inreverse
 * followed by a new line
 * @s: The string to be printed
 * Return: void
 */

void print_rev(int *s)

{

	int c = 0;

	while (s[c] != '\0')
	{
	c++
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
