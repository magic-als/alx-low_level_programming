#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: If str1 < str2, the first negative difference
 * If str1 == str2, 0
 * If str1 > str2, the first positive difference
 *
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 && *s2 && *s1 == *s2)
	{
	*s1++;
	*s2++;
	}
	return (*s1 - *s2);
}
