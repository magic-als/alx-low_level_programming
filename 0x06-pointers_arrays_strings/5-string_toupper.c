#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase
 * @str: A string to be changed
 * Return: A pointer to be changed string
 */

char *string_toupper(*str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
