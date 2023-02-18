#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that outputs as  positive negetive or zero
 * Return: Always (success)
  */

int main(void)

{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n % 10);
	/* your code goes there */
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	else if (last_digit < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);

	return (0);
}
