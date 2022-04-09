#include <stdio.h>
/**
 * main - print all single digit number of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}
