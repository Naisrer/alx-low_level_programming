#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a program that list alphabet
 * Return: Always (success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	_putchar(alp);
	_putchar('\n');
}
