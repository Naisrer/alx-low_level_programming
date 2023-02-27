#include "main.h"

/**
 * swap_int - a function that swaps the values of two int values
 * @a: the first value
 * @b: the second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;
tmp = *a;
	*a = *b;
	*b = tmp;
}
