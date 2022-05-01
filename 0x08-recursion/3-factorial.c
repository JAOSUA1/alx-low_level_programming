#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: The inputed integer
 *
 * Return: return -1 if number is less than 0
 * and 1 if number is equal to 0
 * otherwise return the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
