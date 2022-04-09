#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
char gh;
for (gh = 'A' ; gh <= 'Z' ; gh++)
{
putchar(gh);
}
putchar('\n');
return (0);
}
