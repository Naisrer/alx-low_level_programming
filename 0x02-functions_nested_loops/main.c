#include <stdio.h>
#include "main.h"

int main()
{
	char x[] = "_putchar";
	int i;

	for (i=0; x[i]; i++)
	_putchar(x[i]);

	-putchar('\n');
	
	return 0;
}
