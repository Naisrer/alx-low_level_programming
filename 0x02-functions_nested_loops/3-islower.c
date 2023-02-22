#include <stdio.h>
#include "main.h"

/**
 * _islower - a program that detects lower case letter
 * Return: Always (success)
 */

int _islower(int c)

{
	int c;
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
