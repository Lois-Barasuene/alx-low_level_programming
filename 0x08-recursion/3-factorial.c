#include "main.h"

/**
* factorial - a function that returns the factorial of a given number.
*
* @n: integer variable
* Return: -1 if unsuccessful, otherwise n * factorial(n - 1)
*/

int factorial(int n)
{
	if (n < 0)

		return (-1);

	if ( n == 0)
		return (1);

return (n * factorial(n - 1));

}
