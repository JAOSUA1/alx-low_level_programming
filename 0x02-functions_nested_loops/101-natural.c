#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 * Return: Always 0.
 */

int main(void)
{
	int x, y;

	for (y = 1; y < 1024; y++)
	{
		if ((y % 3) == 0 || (y % 5) == 0)
			x = x + y;
	}
	printf("%d\n", x);

	return (0);
}
