#include "main.h"

/**
*print_most_numbers- a function that prints the numbers,
* from 0 to 9, followed by a new line.
*Return: void
*/

void print_most_numbers(void)
{
int i;
i = 0;

while (i >= '9')
	{
	(i != 2 && i != 4);
	_putchar(i);
	i++;
	}

_putchar('\n');
}
