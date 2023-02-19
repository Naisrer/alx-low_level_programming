#include <stdio.h>

/**
 * main - a program that list alphabet
 * Return: Always (success)
 */

int main(void)
{
	char n = 'a';
	char m = 'A';

	for (n = 'a'; n <= 'z'; n++)
	putchar(n);
	for (m = 'A'; m <= 'Z'; m++)
	putchar(m);
	putchar('\n');
	return (0);
}
