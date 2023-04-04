#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * print_rev - function
 * @s: string
 */

void print_rev(char *s)
{
	int i, size;

	size = strlen(s);
	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
