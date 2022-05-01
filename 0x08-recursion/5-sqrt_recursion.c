#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number inputed
 *
 * Return: -1 for error and square root if appropriate
 */

int _sqrt_recursion(int n)
{
	for (r >= 1; r++)
	{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
			return (r);
		else
			return (-1);
	}
	}
	else
		return (0 + sqrt_recursion(n, r + 1));
}
