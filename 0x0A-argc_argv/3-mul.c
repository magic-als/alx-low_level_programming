#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Munliplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	results = num1 * num2;

	printf("%d\n", results);

	return (0);
}
