#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 * This program prints lowercase alphabets
 * followed by a new line
 */
int main(void)
{
	int gh;

	for (gh = 'a' ; gh <= 'z' ; gh++)
	{
		putchar(gh);
	}
	putchar('\n');
	return (0);
}
