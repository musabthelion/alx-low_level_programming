#include<stdio.h>
#include"main.h"

/**
 * print_line - function name
 * @n: integer
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			putchar('_');
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
