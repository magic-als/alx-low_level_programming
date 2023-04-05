#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The valuue to be exponented
 * @y: The exponent of value x
 * Return: If y is less than 0, return -1
 * otherwise return an integer
 */

int _pow_recursion(int x, int y)

{

	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
