#include "main.h"
/**
 * _islower - check character if it is lower
 * @c: The character to be checked
 * Return: 1 if char is lower & 0 if its not
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
