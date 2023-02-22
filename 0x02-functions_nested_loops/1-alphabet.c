#include <stdio.h>
#include "main.h"
/**
 * main - a program that list alphabet
 * description - void function 
 * Return: Always (success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	_putchar(alp);
	_putchar('\n');
}
