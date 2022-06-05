#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0.
 */

int main(void)
{
	int z;
	long int n1, n2, f;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (z = 0; z < 48; z++)
	{
		f = n1 + n2;
		printf(", %ld", f);
		n1 = n2;
		n2 = f;
	}
	printf("\n");

	return (0);
}
