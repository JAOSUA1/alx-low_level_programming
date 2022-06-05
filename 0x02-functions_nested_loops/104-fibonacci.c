#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int i, boolean, boolean2;
	long int n1, n2, n3, n4, f, f1;

	n1 = 1;
	n2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (boolean)
		{
			f = n1 + n2;
			printf(", %ld", f);
			n1 = n2;
			n2 = f;
		}
		else
		{
			if (boolean2)
			{
				n3 = n1 % 1000000000;
				n4 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			f1 = (n3 + n4);
			f = n1 + n2 + (f1 / 1000000000);
			printf(", %ld", f);
			printf("%ld", f1 % 1000000000);
			n1 = n2;
			n3 = n4;
			n2 = f;
			n4 = (f1 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
		boolean = 0;
	}
	printf("\n");
	return (0);
}
