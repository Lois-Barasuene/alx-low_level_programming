#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string.
*
* @s: character pointer
*
* Return: 0 if unsuccessful otherwise return 1 +_strlen_recursion(s + 1)
*/

int _strlen_recursion(char *s)
{
	if (!s || *s == '\0')
	{
		return (0);
	}
return (1 + _strlen_recursion(s + 1));
}
