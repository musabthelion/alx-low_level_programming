#include<stdio.h>
#include"main.h"

/**
 * print_numbers - prints numbers
 * void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
