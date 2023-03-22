#include<stdio.h>
#include"main.h"
/**
 * print_sign - function
 * @n : sign of the muber
 * Return: 1 if n is greater than one
 * 0 if nis zero
 * -1 if niis negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
