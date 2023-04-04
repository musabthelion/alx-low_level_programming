#include<stdio.h>
#include<string.h>
#include"main.h"

/**
 * puts_half - funciton routine
 *
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i, size, half_size;

	size = strlen(str);
	half_size = (size - 1) / 2;
	for (i = half_size + 1; i < size ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
