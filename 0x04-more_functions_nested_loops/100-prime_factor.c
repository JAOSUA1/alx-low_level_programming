#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
long int n, g;
n = 612852475143;
for (g = 2; g <= n; g++)
{
if (n % g == 0)
{
n /= g;
g--;
}
}
printf("%ld\n", g);
return (0);
}
