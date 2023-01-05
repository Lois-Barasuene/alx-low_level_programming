#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * Description:
 * @s: string to be printed
 * Return:.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
	{
	return;
	_putchar(s[0]);
	}
	
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
