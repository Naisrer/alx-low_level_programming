#include "main.h"

/**
 * _strlen - a function that displays length of a string
 * @s: string length
 * Return: 0
 */

int _strlen(char *s)
{
	int length;

	while (*s !=  '\0')
	{
		length += 1;
		*s = *s + 1;
	}
	return (length);
}

