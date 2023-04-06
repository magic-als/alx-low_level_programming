#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the natural square root from
 * Return: -1 if n does not have a natural square root
 * otherwise print the natural square root of n
 */

int _sqrt_recursion(int n)

{

	return (_sqrt(n, 1));
}


/**
 * _sqrt - Calculates natural square root
 * @n: The number to calculate the square root from
 * @i: Iterate number
 * Return: The natural square root
 */

int _sqrt(int n, int i)

{

	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}

	return (_sqrt(n, i + 1));
}
