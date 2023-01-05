#include <stdio.h>


int _pow_recursion(int x, int y);

int main(void)
{
	printf("2 raised to the power of 5 is %d\n", _pow_recursion(2, 5));

return (0);
}


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

return (x * _pow_recursion(x, y - 1));

}
