/**
*_isupper - A function that checks for uppercase character
* @c: int variable
*Return: returns 1 if successful 0 if not
*/

#include "main.h"

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
