#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - The Entry point of the program
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = /*abs*/ n % 10;

	/*if (last_digit < 0)
	last_digit = last_digit * (-1);*/

	if (last_digit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_digit);

	else
	printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, last_digit);

	return (0);
}
