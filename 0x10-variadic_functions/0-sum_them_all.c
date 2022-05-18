#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This program sums all its parameters
 * @n: Number of argument parameters
 *
 * Return: sum otherwise 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (a = 0; a < n; a++)
		sum += va_arg(valist, n);
	va_end(valist);
	_putchar("\n");
	return (sum);
}
