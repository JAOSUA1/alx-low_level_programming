#include <stdio.h>

/**
 * main - prints all the arguments passed
 * @argc: stands for the number of arguments
 * @argv: standa for the array of arguments passed
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}
	return (0);
}
