#include<stdio.h>
#include<string.h>
#include"main.h"

/**
 * print_array - funciton called
 *
 * @a: pointer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
