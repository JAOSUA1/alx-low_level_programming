#include <stdio.h>
#include <stdlib.h>

void print_chessboard(char (*a)[8])

{

	unsigned int i, m = 0;
	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m - 1;
			printf('\n');
		}
		printf(a[i / 8][i - m]);
	}
	printf('\n');
}
