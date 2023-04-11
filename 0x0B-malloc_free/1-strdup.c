#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string to be worked on
 *
 * Return: A pointer to the duplicate string, or NULL if otherwise.
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[i])
	{
	i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
	return (NULL);
	}

	while (a < i)
	{
	s[a] = str[a];
	a++;
	}

	s[a] = '\0';
	return (s);
}
