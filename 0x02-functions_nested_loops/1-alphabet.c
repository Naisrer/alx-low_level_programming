#include "main.h"
/**
 * main - a program that list alphabet
 * Return: Always (success)
 */

void print_alphabet(void);
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	putchar('\n');
}
