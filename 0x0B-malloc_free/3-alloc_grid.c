#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)

{
	int **gridout;
	int c, d;

	if (width < 1 || height < 1)
		return (NULL);
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		gridout[c] = malloc(width * sizeof(int));
		if (gridout[c] == NULL)
		{
			for (c--; c >= 0; c--)
				free(gridout[c]);
				free(gridout);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	for (d = 0; d < width; d++)
		gridout[c][d] = 0;
	return (gridout);
}
