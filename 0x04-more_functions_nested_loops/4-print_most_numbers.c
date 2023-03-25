#include<stdio.h>
#include"main.h"

/**
 * print_most_numbers - print zero to nine except two and four
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
