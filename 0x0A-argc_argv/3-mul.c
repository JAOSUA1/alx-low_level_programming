#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply arguments
 * @argc: number of arguments
 * @argv: Argument array
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
