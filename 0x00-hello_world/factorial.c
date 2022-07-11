#include <stdio.h>
/**
 * factorial - gives the factorial of a number
 * @a is the number to input
 *
 * Return: return 0 as success
 */

int factorial(int n)
{
	int c;
	int res;

	if (n <= 0)
		return (1);
	else
	{
		printf("Enter the number to calculate\n");
		scanf("%d\n", &n);
		res = (n * factorial(n - 1));
	}
		printf("Factorial of %d is %d\n", n, res);
		return (0);
}
