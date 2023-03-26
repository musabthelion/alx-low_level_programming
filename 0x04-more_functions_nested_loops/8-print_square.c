#include <stdio.h>
#include"main.h"

/**
 * print_square - prints square
 * @size: integer
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i == j)
					putchar('#');
				else if (i < j)
					putchar('#');
				else if (i > j)
					putchar('#');
			}
			putchar('\n');
		}
	}
}
