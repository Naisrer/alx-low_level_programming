#include <stdio.h>
/**
 * main - a program that list base of 16
 * Return: Always (success)
 */

int main(void)
{
	char n = '0';
	char m = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
		putchar('\n');
		return (0);
}
