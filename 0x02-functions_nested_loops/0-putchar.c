#include <stdio.h>
/**
 * main - a program that displays a word
 * Return: Always (success)
 */

int main(void)

{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i]; i++)
	putchar(x[i]);
	putchar('\n');
	return (0);
}
