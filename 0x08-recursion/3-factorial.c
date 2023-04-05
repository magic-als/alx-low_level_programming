#include "main.h"

/**
 * factorial - Returns the factorial of n number
 * @n: The number to find factorial on
 * Return: if n is less than 0, return -1 to indicate error
 * otherwise return an integer
 */

int factorial(int n)

{

	if (n < 0)
	{
	return (-1);
	}
	if (n <= 1)
	{
	return (1);
	}

	return (n * factorial(n - 1));
}
