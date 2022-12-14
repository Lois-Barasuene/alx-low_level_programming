#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main- the entry point
*
*Return: Always 0 (success)
*/

int main(void)
{

char i;
{
for (i = 'a'; i <= 'z'; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
}

putchar('\n');
return (0);

}
