#include "main.h"

/**
* factorial - a function that returns the factorial of a given number.
*
* @n: integer variable
* Return: 0 if successful, -1 otherwise
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

return (n * factorial(n - 1));

}
