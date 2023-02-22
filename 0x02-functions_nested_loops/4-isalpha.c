#include "main.h"

/**
 * _isalpha - check a char if its alpha
 * @c: The character to be checked
 * Return: 1 if its alpha & 0 if its not
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
