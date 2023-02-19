#include <stdio.h>

/**
 * main - a program that list alphabet
 * Return: Always (success)
 */

int main(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' || n == 'q')
			continue;
		putchar(n);
	}
		putchar('\n');
		return (0);
}
