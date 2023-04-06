#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if input integer is a prime number or not
 *  @n: The number to be worked on
 *  Return: 1 if n is a prime number, otherwise return 0
 */

int is_prime_number(int n)

{

	return (check_prime(n, 1));
}

/**
 * check_prime - Checks if number is prime or not
 * @n: The number to be checked
 * @i: The iteration times
 * Return: 1 if n is a prime number, otherwise return 0
 */

int check_prime(int n, int i)

{

	if (n <= 1)
	{
	return (0);
	}
	if (n % i == 0 && i > 1)
	{
	return (0);
	}
	if ((n / i) < i)
	{
	return (1);
	}

	return (check_prime(n, i + 1));
}
