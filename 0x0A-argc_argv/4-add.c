#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int sum = 0;
	int i, j, num;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	num = atoi(argv[i]);
	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}
	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
