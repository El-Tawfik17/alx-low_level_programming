#include "main.h"
/**
 * _pow_recursion - function
 * Description:this function returns the value of
 * x raised to the power of y
 * @x:parameter of function
 * @y:parameter of function
 * Return:-1 or result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
