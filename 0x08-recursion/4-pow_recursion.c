#include "main.h"
/**
 * _pow_recursion - Calc power
 * @x: arg
 * @y: arg
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
	{
		y--;
	}
	return (x * _pow_recursion(x, y));
}
