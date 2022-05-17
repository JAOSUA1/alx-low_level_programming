#include "variadic_funtion.h"

/**
 * sum_them_all - This program sums all its parameters
 * @n: Number of argument parameters
 *
 * Return: sum otherwise 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lst, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(lst, int);
	va_end(lst);
	return (sum);
}
