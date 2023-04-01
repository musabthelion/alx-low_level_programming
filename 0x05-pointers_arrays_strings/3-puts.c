#include<stdio.h>
#include"main.h"

/**
 * _puts - function
 *
 * @str: pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
