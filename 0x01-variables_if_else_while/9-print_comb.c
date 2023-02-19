#include <stdio.h>
/**
 * main - possible combination of a single digit
 * Return: Always (success)
 */

int main(void)
{
	int n = 0;
	int m = '$';

	while (n <= 9)
	{
		putchar(n + '0');
			if (n == 9)
				break;
		putchar(',');
		n++;
	}
	{
		putchar(m);
	}
	{
		putchar('\n');
	}
		return (0);
}
