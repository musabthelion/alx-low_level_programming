#include <stdio.h>
#include"main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer
 * Return: value
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		i = -i;
		j = (i % 10);
	}
	if (j < 0)
	{
		j = -j;
		_putchar(j + '0');
	}
	return (j);
}
