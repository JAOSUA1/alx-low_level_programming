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
	va_list val;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(val, n);

	for (a = 0; a < n; a++)
		sum += va_arg(val, int);
	va_end(val);
	return (sum);

	_putchar('\n');
}
