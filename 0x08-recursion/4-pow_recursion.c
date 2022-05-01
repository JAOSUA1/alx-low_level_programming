#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to power of y
 * @x: is the base number
 * @y: the exponential
 *
 * Return: -1 if y is less than 0
 * and 1 if y is 0 else returns x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
